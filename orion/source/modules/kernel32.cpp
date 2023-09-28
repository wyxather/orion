#include "kernel32.h"

#include "source/modules/modules.h"

using orion::modules::Kernel32;

Kernel32::Kernel32(void* const module_address) noexcept {
    alloc_console = LI_FUNC(AllocConsole)::in(module_address);
    close_handle = LI_FUNC(CloseHandle)::in(module_address);
    create_thread = LI_FUNC(CreateThread)::in(module_address);
    free_console = LI_FUNC(FreeConsole)::in(module_address);
    free_library_and_exit_thread =
        LI_FUNC(FreeLibraryAndExitThread)::in(module_address);
    get_console_window = LI_FUNC(GetConsoleWindow)::in(module_address);
    get_std_handle = LI_FUNC(GetStdHandle)::in(module_address);
    set_console_text_attribute =
        LI_FUNC(SetConsoleTextAttribute)::in(module_address);
    sleep = LI_FUNC(Sleep)::in(module_address);
}

Kernel32::~Kernel32() noexcept {
    alloc_console = nullptr;
    close_handle = nullptr;
    create_thread = nullptr;
    free_console = nullptr;
    free_library_and_exit_thread = nullptr;
    get_console_window = nullptr;
    get_std_handle = nullptr;
    set_console_text_attribute = nullptr;
    sleep = nullptr;
}
