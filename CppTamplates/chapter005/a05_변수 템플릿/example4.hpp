#include <iostream>

int main()
{
	std::cout << std::is_const<int>::value << std::endl;
	std::cout << std::is_const_v<const int> << std::endl;
	return 0;
}