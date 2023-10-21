#include "source/imports/kernel32.h"

orion::imports::Kernel32::Kernel32(void* const kernel32) noexcept
{
    allocConsole = LI_FUNC(AllocConsole)::in(kernel32);
    freeConsole  = LI_FUNC(FreeConsole)::in(kernel32);
}
