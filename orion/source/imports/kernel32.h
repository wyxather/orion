#pragma once

namespace orion::imports
{

struct Kernel32 final
{
    friend void to_json( nlohmann::json& json, const Kernel32& kernel32 ) noexcept;

    Kernel32( Kernel32&& )                 = delete;
    Kernel32& operator=( Kernel32&& )      = delete;
    Kernel32( const Kernel32& )            = delete;
    Kernel32& operator=( const Kernel32& ) = delete;

    explicit Kernel32( void* kernel32 ) noexcept;

    decltype( &AllocConsole )             allocConsole             = nullptr;
    decltype( &CloseHandle )              closeHandle              = nullptr;
    decltype( &CreateThread )             createThread             = nullptr;
    decltype( &FreeConsole )              freeConsole              = nullptr;
    decltype( &FreeLibraryAndExitThread ) freeLibraryAndExitThread = nullptr;
    decltype( &GetConsoleWindow )         getConsoleWindow         = nullptr;
    decltype( &GetCurrentProcess )        getCurrentProcess        = nullptr;
    decltype( &GetCurrentProcessId )      getCurrentProcessId      = nullptr;
    decltype( &GetDateFormatA )           getDateFormatA           = nullptr;
    decltype( &GetLocalTime )             getLocalTime             = nullptr;
    decltype( &GetModuleHandleA )         getModuleHandleA         = nullptr;
    decltype( &GetModuleInformation )     getModuleInformation     = nullptr;
    decltype( &GetStdHandle )             getStdHandle             = nullptr;
    decltype( &GetTimeFormatA )           getTimeFormatA           = nullptr;
    decltype( &SetConsoleCtrlHandler )    setConsoleCtrlHandler    = nullptr;
    decltype( &SetConsoleTextAttribute )  setConsoleTextAttribute  = nullptr;
    decltype( &Sleep )                    sleep                    = nullptr;
    decltype( &VirtualQuery )             virtualQuery             = nullptr;
    decltype( &WriteConsoleA )            writeConsoleA            = nullptr;
};

} // namespace orion::imports
