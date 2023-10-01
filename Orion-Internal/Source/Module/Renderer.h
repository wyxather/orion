#pragma once

#include "Hooks.h"

class Renderer
{
public:
	enum class Type
	{
		NONE,
		D3D9,
		D3D11,
		AUTO
	};

	explicit Renderer(Type type = Type::AUTO) noexcept;
	~Renderer() noexcept;

	Renderer(Renderer&&) = delete;
	Renderer(const Renderer&) = delete;
	Renderer& operator=(Renderer&&) = delete;
	Renderer& operator=(const Renderer&) = delete;

	[[nodiscard]] constexpr auto getType() const noexcept { return type; }
	[[nodiscard]] constexpr auto&& getHook() const noexcept { return renderer; }

	auto hook() noexcept -> void;
	auto unhook() noexcept -> void;

private:
	Type type;
	HMODULE handle;
	HookType renderer;
};

inline std::optional<Renderer> renderer;