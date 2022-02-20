#include <__msvc_all_public_headers.hpp>
using namespace std;
#define Range std::ranges

template<typename... Args>
inline void Print(const std::string_view fmt, const Args&... args)
{
	std::cout << std::vformat(fmt, std::make_format_args(args...));
}
template<typename... Args>
inline void Println(const std::string_view fmt, const Args&... args)
{
	std::cout << std::vformat(fmt, std::make_format_args(args...)) << std::endl;
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
	FiveRulers(FiveRulers&&) noexcept
	{ std::cout << "-------*move ctor*-------\n"; }
	FiveRulers& operator=(const FiveRulers&)
	{ std::cout << "-------*copy op= *-------\n"; return *this; }
	FiveRulers& operator=(FiveRulers&&) noexcept
	{ std::cout << "-------*move op= *-------\n"; return *this; }

	Val_t Func() { return str; }
};
struct MemoryLayout
{
	int32_t a;
	short c;
	char d;
	int64_t b;
};
struct Null {};

int main()
{
	std::vector<int> v{5, 3, 4, 1, 2};
	Range::sort(v, std::greater());
	Range::for_each(v, [](const auto& x) {std::cout << std::format("{} ", x); });
	std::stack<int> x;
	x.pop();
}
