#include <iostream>
#include <bitset>

template <unsigned long long N>
void printBitset(std::bitset<N> const& bs)
{
	// <��ů�� �۴ٷ� �ν��Ѵ�!!!
	//std::cout << bs.to_string<char, std::char_traits<char>, std::allocator<char>>();

	std::cout << bs.template to_string<char, std::char_traits<char>, std::allocator<char>>();

}

class SomeCompilerSpecificName {
public:
	SomeCompilerSpecificName();		//�����Ϸ����� ȣ���� �� �ִ� ������
	template <typename T1,typename T2>
	auto operator()(T1 x, T2 y)const {
		return x + y;
	}
};