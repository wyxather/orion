#pragma once

#define INCONSTRUCTIBLE(c)\
c() = delete;\
c(c&&) = delete;\
c(const c&) = delete;\
c& operator=(c&&) = delete;\
c& operator=(const c&) = delete;

#define DEFINE_VIRTUAL_METHOD(index, name, conv, type, params, args)\
[[nodiscard]] constexpr auto name params noexcept -> type\
{\
     return VirtualMethod::call<type, static_cast<std::size_t>(index), VirtualMethod::CallType::THISCALL>args;\
}

#define DEFINE_VIRTUAL_METHOD_TEMPLATE(index, name, conv, temp, type, params, args) \
temp\
[[nodiscard]] constexpr auto name params noexcept -> type\
{\
    return VirtualMethod::call<type, static_cast<std::size_t>(index), VirtualMethod::CallType::NONE>args;\
}

#define VIRTUAL_METHOD_GET(_1,_2,_3,_4,_5,_6,_7,MAX,...) MAX
#define VIRTUAL_METHOD_EXPAND(x) x
#define VIRTUAL_METHOD(...) VIRTUAL_METHOD_EXPAND(VIRTUAL_METHOD_GET(__VA_ARGS__, DEFINE_VIRTUAL_METHOD_TEMPLATE, DEFINE_VIRTUAL_METHOD, , , , ,)(__VA_ARGS__))

#define MEMBER(name, offset, type)\
[[nodiscard]] constexpr auto name() const noexcept -> std::add_lvalue_reference_t<type>\
{\
    return *reinterpret_cast<std::add_pointer_t<type>>(reinterpret_cast<std::uintptr_t>(this) + offset);\
}

namespace VirtualMethod
{
	enum class CallType
	{
		NONE,
		THISCALL
	};

	template <typename ReturnType, std::size_t index, CallType callType, typename ...Args>
	[[nodiscard]] constexpr auto call(void* _this, Args... args) noexcept -> ReturnType
	{
		switch (callType)
		{
		case CallType::THISCALL: return (*static_cast<ReturnType(__thiscall***)(void*, Args...)>(_this))[index](_this, args...);
		}
		return (*static_cast<ReturnType(__cdecl***)(void*, Args...)>(_this))[index](_this, args...);
	}
}