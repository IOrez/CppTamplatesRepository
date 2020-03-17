#include <iostream>
#include <bitset>

template <unsigned long long N>
void printBitset(std::bitset<N> const& bs)
{
	// <토킁이 작다로 인식한다!!!
	//std::cout << bs.to_string<char, std::char_traits<char>, std::allocator<char>>();

	std::cout << bs.template to_string<char, std::char_traits<char>, std::allocator<char>>();

}

class SomeCompilerSpecificName {
public:
	SomeCompilerSpecificName();		//컴파일러만이 호출할 수 있는 생성자
	template <typename T1,typename T2>
	auto operator()(T1 x, T2 y)const {
		return x + y;
	}
};