#pragma once

namespace orion::core {

    class Console final {
    public:
        NON_COPYABLE(Console)
        NON_MOVEABLE(Console)

        enum class Color {
            BLACK,
            BLUE,
            GREEN,
            CYAN,
            RED,
            MAGENTA,
            BROWN,
            LIGHTGRAY,
            DARKGRAY,
            LIGHTBLUE,
            LIGHTGREEN,
            LIGHTCYAN,
            LIGHTRED,
            LIGHTMAGENTA,
            YELLOW,
            WHITE
        };

        Console() noexcept;

    private:
        class Allocator final {
            const BOOL status = IMPORT(AllocConsole)();

        public:
            NON_COPYABLE(Allocator)
            NON_MOVEABLE(Allocator)

            constexpr Allocator() noexcept = default;

            constexpr ~Allocator() noexcept {
                if (*this)
                    IMPORT(FreeConsole)();
            }

            [[nodiscard]] constexpr explicit operator bool() const noexcept {
                return Allocator::status != 0;
            }
        };

        class Enumerator final {
            [[nodiscard]] static auto match(HWND handle) noexcept -> bool;
            [[nodiscard]] static auto CALLBACK
            enumerate(HWND handle, Enumerator& enumerator) noexcept -> BOOL;

        public:
            NON_COPYABLE(Enumerator)
            NON_MOVEABLE(Enumerator)

            Enumerator() noexcept {
                IMPORT(EnumWindows)
                (WNDENUMPROC(&Console::Enumerator::enumerate), LPARAM(this));
            }

            [[nodiscard]] constexpr explicit operator bool() const noexcept {
                return Enumerator::handle != nullptr;
            }

            HWND handle = nullptr;
        };

        struct Stream final {
            NON_COPYABLE(Stream)
            NON_MOVEABLE(Stream)

            Stream() noexcept {
                freopen_s(
                    &stream,
                    utils::String<"CONOUT$">(),
                    utils::String<"w">(),
                    stdout
                );
            }

            constexpr ~Stream() noexcept {
                if (*this)
                    std::fclose(Stream::stream);
            }

            [[nodiscard]] constexpr explicit operator bool() const noexcept {
                return Stream::stream != nullptr;
            }

        private:
            FILE* stream = nullptr;
        };

        auto update_time() noexcept -> void;

        const Allocator allocator;
        std::optional<const Enumerator> enumerator;
        std::optional<const Stream> stream;
        HANDLE std_output_handle = nullptr;
        tm time = {};

    public:
        constexpr auto set_color(Color color) const noexcept -> void {
            IMPORT(SetConsoleTextAttribute)
                .cached()(std_output_handle, static_cast<WORD>(color));
        }

        template<
            stb::fixed_string _Format,
            Color _Color = Color::LIGHTGREEN,
            typename... _Args>
        constexpr auto log(_Args&&... _Arg) const noexcept -> void {
            set_color(_Color);
            Console::update_time();
            std::printf(
                utils::String<"[%2d:%2d:%2d] ">(),
                Console::time.tm_hour,
                Console::time.tm_min,
                Console::time.tm_sec
            );
            std::printf(utils::String<_Format>(), std::forward<_Args>(_Arg)...);
            std::puts(utils::String<"">());
        }
    };

}  // namespace orion::core
