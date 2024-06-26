#pragma once

#include <cstdint>

#include "source/utility/retspoof.h"
#include "source/utility/windows.h"

namespace orion {

    namespace utility {

        class Module;

    }

    namespace import {

        class User32 final {
        public:
            std::uintptr_t gadget_address;
            utility::RetSpoof<decltype(&GetWindowLongPtr)> get_window_long_ptr;
            utility::RetSpoof<decltype(&SetWindowLongPtr)> set_window_long_ptr;
            utility::RetSpoof<decltype(&EnumWindows)> enum_windows;
            utility::RetSpoof<decltype(&GetWindowThreadProcessId)> get_window_thread_process_id;
            utility::RetSpoof<decltype(&IsWindowVisible)> is_window_visible;
            utility::RetSpoof<decltype(&GetClassNameA)> get_class_name_a;
            utility::RetSpoof<decltype(&GetWindowTextLengthA)> get_window_text_length_a;
            utility::RetSpoof<decltype(&GetWindowTextA)> get_window_text_a;
            utility::RetSpoof<decltype(&MessageBoxA)> message_box_a;
            utility::RetSpoof<decltype(&CallWindowProc)> call_window_proc;
            utility::RetSpoof<decltype(&MessageBoxW)> message_box_w;
            utility::RetSpoof<decltype(&RegisterClassExA)> register_class_ex_a;
            utility::RetSpoof<decltype(&UnregisterClassA)> unregister_class_a;
            utility::RetSpoof<decltype(&CreateWindowExA)> create_window_ex_a;
            utility::RetSpoof<decltype(&DestroyWindow)> destroy_window;
            utility::RetSpoof<decltype(&GetSystemMetrics)> get_system_metrics;
            utility::RetSpoof<decltype(&GetCursorPos)> get_cursor_pos;
            utility::RetSpoof<decltype(&PostMessage)> post_message;

            explicit User32(const utility::Module &user32) noexcept;

            User32(User32 &&) = delete;
            User32 &operator=(User32 &&) = delete;

            User32(const User32 &) = delete;
            User32 &operator=(const User32 &) = delete;
        };

    }  // namespace import

}  // namespace orion
