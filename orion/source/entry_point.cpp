#include "entry_point.h"

#include "source/context.h"

using orion::EntryPoint;

EXTERN_C BOOL WINAPI _CRT_INIT(HMODULE, DWORD, LPVOID);

auto EntryPoint::process(
    const HMODULE module_handle,
    const DWORD reason_for_call,
    const LPVOID reserved
) noexcept -> BOOL {
    const auto crt_init_result =
        _CRT_INIT(module_handle, reason_for_call, reserved);
    if (crt_init_result == TRUE && reason_for_call == DLL_PROCESS_ATTACH) {
        context.handle = module_handle;
        context.kernel32.emplace();
        context.console.emplace();
        context.platform.emplace(std::nullopt, std::nullopt);
        context.renderer.emplace(Renderer::Enumerate::MANUAL);
        context.input.emplace(Input::Enumerate::MANUAL);
        context.platform->hook();
    }
    return crt_init_result;
}
