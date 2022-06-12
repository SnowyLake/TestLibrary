#define _CRT_SECURE_NO_WARNINGS
#include <__msvc_all_public_headers.hpp>
#include <Windows.h>
using namespace std;
#define stdr std::ranges
#define stdrv std::ranges::views

namespace Swy
{
template<typename T>
concept IsNotString = !requires{ std::same_as<T, std::string> && std::same_as<T, std::string_view>; };

template<typename... Args>
inline void Print(std::string_view fmt, const Args&... args)
{
	std::cout << std::vformat(fmt, std::make_format_args(args...));
}
template<IsNotString T>
inline void Print(T&& arg)
{
	std::cout << arg;
}

template<typename... Args>
inline void Println(std::string_view fmt, const Args&... args)
{
	std::cout << std::vformat(fmt, std::make_format_args(args...)) << std::endl;
}
template<IsNotString T>
inline void Println(T&& arg)
{
	std::cout << arg << std::endl;
}

inline void Println()
{
	std::cout << std::endl;
}
}

class FiveRulers
{
public:
	using Val_t = std::string;
public:
	Val_t str = "Fuxk Cpp.\n";
	FiveRulers()
	{ std::cout << "-------*ctor*-------\n"; }
	~FiveRulers()
	{ std::cout << "-------*dtor*-------\n"; }
	FiveRulers(const FiveRulers&)
	{ std::cout << "-------*copy ctor*-------\n"; }
	FiveRulers& operator=(const FiveRulers&)
	{ std::cout << "-------*copy op= *-------\n"; return *this; }
	FiveRulers(FiveRulers&&) noexcept
	{ std::cout << "-------*move ctor*-------\n"; }
	FiveRulers& operator=(FiveRulers&&) noexcept
	{ std::cout << "-------*move op= *-------\n"; return *this; }

	Val_t Func() const { return str; }
};
#include <algorithm>
struct MemoryLayout
{

};
struct Null {};

struct B {};
struct D1 : public  B {};
struct D2 : private B {};



int main()
{
	std::priority_queue<int> pq;
	pq.emplace(2);
	pq.emplace(1);
	pq.emplace(4);
	pq.emplace(3);
	std::cout << pq.top();
}