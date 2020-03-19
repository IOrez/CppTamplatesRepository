#include <iostream>
#include <array>

template <int N>
std::array<int, N> arr{};	//요소를 N개 같는 배열, 0으로 초기화

template <auto N>
constexpr decltype(N) dval = N;

int main()
{
	std::cout << dval<'c'> << '\n';
	arr<10>[0] = 42;

	for (std::size_t i = 0; i < arr<10>.size(); ++i)
	{
		std::cout << arr<10>[i] << '\n';
	}
}