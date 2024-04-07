#include "source/context.h"
#include "source/utility/module.h"
#include "source/utility/windows.h"
#include "source/utility/xorstr.h"

using orion::context;
using orion::utility::Module;
using orion::utility::XorStr;

static constexpr auto ntdll = XorStr<"ntdll"> {};

EXTERN_C BOOL WINAPI _CRT_INIT(HMODULE, DWORD, LPVOID);

BOOL APIENTRY DllEntryPoint(const HMODULE module_handle, const DWORD reason_for_call, const LPVOID reserved) {
    const auto crt_init = _CRT_INIT(module_handle, reason_for_call, reserved);
    if ( (reason_for_call == DLL_PROCESS_ATTACH) && (crt_init == TRUE) ) {
        context.handle.emplace(module_handle);
        context.ntdll.emplace(*Module::find_module(std::string_view {
            decltype(ntdll)::access().data(),
            decltype(ntdll)::size(),
        }));
    }
    return crt_init;
}
