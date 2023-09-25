#include "orion.h"

#include "core/console.h"
#include "dependencies/minhook/include/MinHook.h"

EXTERN_C BOOL WINAPI _CRT_INIT(HMODULE, DWORD, LPVOID);

namespace {

    HMODULE orion_handle = nullptr;

    [[noreturn]] auto WINAPI unload(const HMODULE module_handle) noexcept
        -> void {
        IMPORT(Sleep)(500);
        _CRT_INIT(module_handle, DLL_PROCESS_DETACH, nullptr);
        IMPORT(FreeLibraryAndExitThread)(module_handle, EXIT_SUCCESS);
    }

}  // namespace

auto orion::Orion::attach() noexcept -> void {
    core::console.emplace();

    if (!Orion::platform.has_value())
        Orion::platform.emplace(std::nullopt, std::nullopt);

    if (!Orion::renderer.has_value())
        Orion::renderer.emplace(Renderer::Enumerate::MANUAL);

    if (!Orion::input.has_value())
        Orion::input.emplace(Input::Enumerate::MANUAL);

    return Orion::platform->hook();
}

auto orion::Orion::init() noexcept -> void {
    if (!Orion::config.has_value())
        Orion::config.emplace();

    if (!Orion::gui.has_value())
        Orion::gui.emplace();

    if (!Orion::game.has_value())
        Orion::game.emplace();

    if constexpr (std::is_same_v<Hooks::Type, Hooks::MinHook>)
        MH_Initialize();

    if (Orion::game.has_value())
        Orion::game->hook();

    if (Orion::input.has_value())
        Orion::input->hook();

    if (Orion::renderer.has_value())
        Orion::renderer->hook();

    if constexpr (std::is_same_v<Hooks::Type, Hooks::MinHook>)
        MH_EnableHook(MH_ALL_HOOKS);
}

auto orion::Orion::exit(const bool unload) const noexcept -> void {
    [[maybe_unused]] static const auto once = [this, unload]() noexcept {
        if constexpr (std::is_same_v<Hooks::Type, Hooks::MinHook>)
            MH_DisableHook(MH_ALL_HOOKS);

        if (Orion::game.has_value())
            Orion::game->unhook();

        if (Orion::input.has_value())
            Orion::input->unhook();

        if (Orion::renderer.has_value())
            Orion::renderer->unhook();

        if (Orion::platform.has_value())
            Orion::platform->unhook();

        if (unload) {
            [[maybe_unused]] const std::unique_ptr<void, decltype(&CloseHandle)>
                thread(
                    IMPORT(CreateThread)(
                        nullptr,
                        0,
                        LPTHREAD_START_ROUTINE(::unload),
                        orion_handle,
                        0,
                        nullptr
                    ),
                    IMPORT(CloseHandle).get()
                );
        }
        return false;
    }();
}

orion::Orion::~Orion() noexcept {
    if constexpr (std::is_same_v<Hooks::Type, Hooks::MinHook>)
        MH_Uninitialize();

    core::console.reset();
}

namespace orion {

    auto get_handle() noexcept -> HMODULE {
        return orion_handle;
    }

    auto EntryPoint::process(
        const HMODULE module_handle,
        const DWORD reason_for_call,
        const LPVOID reserved
    ) noexcept -> BOOL {
        const auto crt_init_result =
            _CRT_INIT(module_handle, reason_for_call, reserved);
        if (crt_init_result == TRUE && reason_for_call == DLL_PROCESS_ATTACH) {
            orion_handle = module_handle;
            orion.emplace().attach();
        }
        return crt_init_result;
    }

}  // namespace orion
