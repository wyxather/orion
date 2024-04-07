#pragma once

#include "source/utility/option.h"
#include "source/utility/windows.h"

namespace orion {

    class Context final {
    public:
        utility::Option<const HMODULE> handle;

        consteval Context() noexcept = default;

        ~Context() noexcept;

        Context(Context &&) = delete;
        Context &operator=(Context &&) = delete;

        Context(const Context &) = delete;
        Context &operator=(const Context &) = delete;
    };

    constinit inline Context context;

}  // namespace orion
