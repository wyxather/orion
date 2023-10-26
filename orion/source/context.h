#pragma once

#include "source/core/console.h"
#include "source/core/platform.h"
#include "source/imports/kernel32.h"
#include "source/imports/msvcrt.h"
#include "source/imports/user32.h"

namespace orion
{

class Application;
class Main;

struct Context final
{
    friend Application;
    friend Main;

    Context()                            = default;
    Context( Context&& )                 = delete;
    Context& operator=( Context&& )      = delete;
    Context( const Context& )            = delete;
    Context& operator=( const Context& ) = delete;

    ~Context();

    _NODISCARD constexpr auto getHandle() const noexcept
    {
        return *handle;
    }

    _NODISCARD constexpr auto& getKernel32() const noexcept
    {
        return *kernel32;
    }

    _NODISCARD constexpr auto& getMsvcrt() const noexcept
    {
        return *msvcrt;
    }

    _NODISCARD constexpr auto& getUser32() const noexcept
    {
        return *user32;
    }

    _NODISCARD constexpr auto& getConsole() const noexcept
    {
        return *console;
    }

    _NODISCARD constexpr auto& getPlatform() const noexcept
    {
        return *platform;
    }

  private:
    utilities::Option<const HMODULE>           handle;
    utilities::Option<const imports::Kernel32> kernel32;
    utilities::Option<const imports::Msvcrt>   msvcrt;
    utilities::Option<const imports::User32>   user32;
    utilities::Option<const core::Console>     console;
    utilities::Option<const core::Platform>    platform;
};

constinit inline Context context;

} // namespace orion
