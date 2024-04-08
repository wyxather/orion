#include "source/import/user32.h"

#include "source/utility/module.h"
#include "source/utility/pointer.h"
#include "source/utility/xorpat.h"
#include "source/utility/xorstr.h"

#define macro_to_string(func) #func
#define resolve_macro(func) macro_to_string(func)

using orion::import::User32;
using orion::utility::Pointer;
using orion::utility::XorPat;
using orion::utility::XorStr;

static constexpr auto jmp_rbx = XorPat<"FF 23", 0> {};

User32::User32(const utility::Module &user32) noexcept {
    gadget_address =
        Pointer { decltype(jmp_rbx)::find(user32.get_code_section()) }.value<std::uintptr_t>();
    get_window_long_ptr = decltype(get_window_long_ptr) {
        user32.get_export_function(
            XorStr<resolve_macro(GetWindowLongPtr)>::access().data()
        ),
    };
    set_window_long_ptr = decltype(set_window_long_ptr) {
        user32.get_export_function(
            XorStr<resolve_macro(SetWindowLongPtr)>::access().data()
        ),
    };
    enum_windows = decltype(enum_windows) {
        user32.get_export_function(XorStr<"EnumWindows">::access().data()),
    };
    get_window_thread_process_id = decltype(get_window_thread_process_id) {
        user32.get_export_function(XorStr<"GetWindowThreadProcessId">::access().data()),
    };
    is_window_visible = decltype(is_window_visible) {
        user32.get_export_function(XorStr<"IsWindowVisible">::access().data()),
    };
    get_class_name_a = decltype(get_class_name_a) {
        user32.get_export_function(XorStr<"GetClassNameA">::access().data()),
    };
    get_window_text_length_a = decltype(get_window_text_length_a) {
        user32.get_export_function(XorStr<"GetWindowTextLengthA">::access().data()),
    };
    get_window_text_a = decltype(get_window_text_a) {
        user32.get_export_function(XorStr<"GetWindowTextA">::access().data()),
    };
    message_box_a = decltype(message_box_a) {
        user32.get_export_function(XorStr<"MessageBoxA">::access().data()),
    };
    call_window_proc = decltype(call_window_proc) {
        user32.get_export_function(
            XorStr<resolve_macro(CallWindowProc)>::access().data()
        ),
    };
}
