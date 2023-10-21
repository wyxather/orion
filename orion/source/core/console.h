#pragma once

namespace orion
{

namespace imports
{

struct Kernel32;

}

namespace core
{

struct Console final
{
    Console(Console&&)                 = delete;
    Console& operator=(Console&&)      = delete;
    Console(const Console&)            = delete;
    Console& operator=(const Console&) = delete;

    explicit Console(const imports::Kernel32& kernel32) noexcept;

    ~Console() noexcept;
};

} // namespace core

} // namespace orion