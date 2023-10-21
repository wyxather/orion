#include "source/dllmain.h"

#include "source/context.h"

EXTERN_C BOOL WINAPI _CRT_INIT(HMODULE, DWORD, LPVOID);

BOOL APIENTRY DllEntryPoint(const HMODULE moduleHandle, const DWORD reason, const LPVOID reserved)
{
    const auto crtInitResult = _CRT_INIT(moduleHandle, reason, reserved);
    if (reason == DLL_PROCESS_ATTACH)
    {
        orion::Main::onAttach(moduleHandle);
    }
    return crtInitResult;
}

void orion::Main::onAttach(const HMODULE moduleHandle) noexcept
{
    context.handle.emplace(moduleHandle);
    context.kernel32.emplace(LI_MOD("kernel32.dll")::get());
}
