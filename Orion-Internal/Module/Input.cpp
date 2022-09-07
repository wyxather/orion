#include "Input.h"
#include "Hooks.h"
#include "Orion.h"
#include "Gui.h"
#include "Window.h"

#include <wrl/client.h>
#define DIRECTINPUT_VERSION 0x0800
#include <dinput.h>
#pragma comment(lib, "Dinput8.lib")
#pragma comment(lib, "Dxguid.lib")

using Orion::Module::Input;
using Orion::Module::Hooks;
using Microsoft::WRL::ComPtr;

namespace
{
	namespace DINPUT8
	{
		HRESULT __stdcall GetDeviceState(
			const LPDIRECTINPUTDEVICE8 pDevice,
			const DWORD cbData,
			const LPVOID lpvData
		) noexcept
		{
			static bool key[2]{};
			static const auto& hook = Orion::instance->getHooks()[Orion::Fnv<"Input">::value];
			const auto result = hook.get<
				9,
				HRESULT,
				Hooks::Function::STDCALL>(
					pDevice,
					cbData,
					lpvData);
			if (Orion::instance->getGui().isOpen() && result == DI_OK) {
				switch (cbData)
				{
				case (sizeof(DIMOUSESTATE)):
				{
					key[0] = reinterpret_cast<LPDIMOUSESTATE>(lpvData)->rgbButtons[0];
					reinterpret_cast<LPDIMOUSESTATE>(lpvData)->rgbButtons[0] = 0;
				}
				break;

				case (sizeof(DIMOUSESTATE2)):
				{
					key[0] = reinterpret_cast<LPDIMOUSESTATE2>(lpvData)->rgbButtons[0];
					reinterpret_cast<LPDIMOUSESTATE2>(lpvData)->rgbButtons[0] = 0;
				}
				break;
				}
				if (key[0] != key[1]) {
					if (POINT pos{}; LI_FN(GetCursorPos).cached()(&pos)) {
						key[0]
							? PostMessage(Orion::instance->getWindow().getHandle(), WM_LBUTTONDOWN, VK_LBUTTON, MAKELPARAM(pos.x, pos.y))
							: PostMessage(Orion::instance->getWindow().getHandle(), WM_LBUTTONUP, NULL, MAKELPARAM(pos.x, pos.y));
					}
					key[1] = key[0];
				}
			}
			return result;
		}

		HRESULT __stdcall GetDeviceData(
			const LPDIRECTINPUTDEVICE8 pDevice,
			const DWORD cbObjectData,
			const LPDIDEVICEOBJECTDATA rgdod,
			const LPDWORD pdwInOut,
			const DWORD dwFlags
		) noexcept
		{
			static const auto& hook = Orion::instance->getHooks()[Orion::Fnv<"Input">::value];
			const auto result = hook.get<
				10,
				HRESULT,
				Hooks::Function::STDCALL>(
					pDevice,
					cbObjectData,
					rgdod,
					pdwInOut,
					dwFlags);
			if (Orion::instance->getGui().isOpen() && result == DI_OK) {
				for (DWORD i = 0; i < *pdwInOut; i++) {
					if (rgdod[i].dwData & 0x80) { // Pressed
						switch (rgdod[i].dwOfs) {
						case DIMOFS_BUTTON0:
						{
							if (POINT pos{}; LI_FN(GetCursorPos).cached()(&pos)) {
								PostMessage(Orion::instance->getWindow().getHandle(), WM_LBUTTONDOWN, VK_LBUTTON, MAKELPARAM(pos.x, pos.y));
								rgdod[i].dwData &= ~0x80;
							}
						}
						break;
						}
					}
					else switch (rgdod[i].dwOfs) { // Release
					case DIMOFS_BUTTON0:
					{
						if (POINT pos{}; LI_FN(GetCursorPos).cached()(&pos))
							PostMessage(Orion::instance->getWindow().getHandle(), WM_LBUTTONUP, NULL, MAKELPARAM(pos.x, pos.y));
					}
					break;
					}
				}
			}
			return result;
		}
	}
}

Input::Input(const Application& app) noexcept :
	m_app{ app },
	m_hooks{ app.getHooks() }
{
	{
		String<"dinput8.dll"> moduleName;
		m_handle = LI_FN(GetModuleHandleA)(moduleName.get());
		if (m_handle && LI_FN(MessageBoxA)(nullptr, moduleName.get(), moduleName.get(), MB_YESNO | MB_ICONINFORMATION) == IDYES) {
			m_type = Type::DINPUT8;
			return;
		}
	}
}

Input::~Input() noexcept
{
	m_type = {};
	m_handle = {};
}

void Input::hook() noexcept
{
	switch (m_type) {

	case Type::DINPUT8:
	{
		String<"DirectInput8Create"> procName;
		const auto directInput8Create = reinterpret_cast<HRESULT(__stdcall*)(HMODULE, DWORD, const IID&, LPDIRECTINPUT8*, LPUNKNOWN)>(LI_FN(GetProcAddress)(m_handle, procName.get()));

		ComPtr<IDirectInput8> directInput8;
		if (directInput8Create(m_app.getHandle(), DIRECTINPUT_VERSION, IID_IDirectInput8, directInput8.GetAddressOf(), nullptr) != DI_OK)
			return;

		ComPtr<IDirectInputDevice8> directInputDevice8;
		if (directInput8->CreateDevice(GUID_SysMouse, directInputDevice8.GetAddressOf(), nullptr) != DI_OK)
			return;

		auto&& hook = m_hooks[Fnv<"Input">::value];
		hook.init(directInputDevice8.Get());
		hook.hookAt(9, &DINPUT8::GetDeviceState);
		hook.hookAt(10, &DINPUT8::GetDeviceData);
	}
	break;

	}
}

void Input::unhook() noexcept
{
	const auto hook = m_hooks.find(Fnv<"Input">::value);
	if (hook != nullptr)
		hook->restore();
}