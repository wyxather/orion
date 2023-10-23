#pragma once

namespace orion::imports
{

struct User32 final
{
    User32( User32&& )                 = delete;
    User32& operator=( User32&& )      = delete;
    User32( const User32& )            = delete;
    User32& operator=( const User32& ) = delete;

    explicit User32( void* user32 ) noexcept;

    decltype( &CallWindowProc )           callWindowProc           = nullptr;
    decltype( &EnumWindows )              enumWindows              = nullptr;
    decltype( &GetClassNameA )            getClassNameA            = nullptr;
    decltype( &GetWindowLongPtr )         getWindowLongPtr         = nullptr;
    decltype( &SetWindowLongPtr )         setWindowLongPtr         = nullptr;
};

} // namespace orion::imports
