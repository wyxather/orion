#include "source/imports/user32.h"

orion::imports::User32::User32( void* const user32 ) noexcept
{
    callWindowProc           = LI_FUNC( CallWindowProc )::in( user32 );
    enumWindows              = LI_FUNC( EnumWindows )::in( user32 );
    getClassNameA            = LI_FUNC( GetClassNameA )::in( user32 );
    getWindowLongPtr         = LI_FUNC( GetWindowLongPtr )::in( user32 );
    getWindowTextA           = LI_FUNC( GetWindowTextA )::in( user32 );
    getWindowTextLengthA     = LI_FUNC( GetWindowTextLengthA )::in( user32 );
    getWindowThreadProcessId = LI_FUNC( GetWindowThreadProcessId )::in( user32 );
    isWindowVisible          = LI_FUNC( IsWindowVisible )::in( user32 );
    messageBoxA              = LI_FUNC( MessageBoxA )::in( user32 );
    setWindowLongPtr         = LI_FUNC( SetWindowLongPtr )::in( user32 );
}

void orion::imports::to_json( nlohmann::json& json, const User32& user32 ) noexcept
{
    json = {
        { xorstr_( "callWindowProc" ), reinterpret_cast<std::uintptr_t>( user32.callWindowProc ) },
        { xorstr_( "enumWindows" ), reinterpret_cast<std::uintptr_t>( user32.enumWindows ) },
        { xorstr_( "getClassNameA" ), reinterpret_cast<std::uintptr_t>( user32.getClassNameA ) },
        { xorstr_( "getWindowLongPtr" ), reinterpret_cast<std::uintptr_t>( user32.getWindowLongPtr ) },
        { xorstr_( "getWindowTextA" ), reinterpret_cast<std::uintptr_t>( user32.getWindowTextA ) },
        { xorstr_( "getWindowTextLengthA" ), reinterpret_cast<std::uintptr_t>( user32.getWindowTextLengthA ) },
        { xorstr_( "getWindowThreadProcessId" ), reinterpret_cast<std::uintptr_t>( user32.getWindowThreadProcessId ) },
        { xorstr_( "isWindowVisible" ), reinterpret_cast<std::uintptr_t>( user32.isWindowVisible ) },
        { xorstr_( "messageBoxA" ), reinterpret_cast<std::uintptr_t>( user32.messageBoxA ) },
        { xorstr_( "setWindowLongPtr" ), reinterpret_cast<std::uintptr_t>( user32.setWindowLongPtr ) },
    };
}
