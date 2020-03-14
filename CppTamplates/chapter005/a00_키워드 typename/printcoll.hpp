#include <iostream>

//STL 컨테이너의 요소 출력
template <typename T>
void printcoll(T const& coll)
{
	typename T::const_iterator pos;					//coll에 대한 반복자
	typename T::const_iterator end(coll.end());		//종료 위치
	for (pos = coll.begin(); pos != end; ++pos)
		std::cout << *pos << ' ';
	
	std::cout << '\n';
}