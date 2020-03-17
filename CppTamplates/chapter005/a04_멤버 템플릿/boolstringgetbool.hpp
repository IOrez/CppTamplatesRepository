#include "boolstring.hpp"
#include <iostream>

//bool형을 위해 BoolString::getValue<>()에 대한 전체 특수화
template<>
inline bool BoolString::get<bool>()const {
	return value == "true" || value == "1" || value == "on";
}


#define MAIN
#ifdef MAIN
int main()
{
	std::cout << std::boolalpha;
	BoolString s1("hello");
	std::cout << s1.get() << std::endl;
	std::cout << s1.get<bool>() << '\n';
	BoolString s2("on");
	std::cout << s2.get<bool>() << '\n';
	return 0;
}
#endif
