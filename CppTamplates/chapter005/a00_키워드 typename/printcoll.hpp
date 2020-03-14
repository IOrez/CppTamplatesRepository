#include <iostream>

//STL �����̳��� ��� ���
template <typename T>
void printcoll(T const& coll)
{
	typename T::const_iterator pos;					//coll�� ���� �ݺ���
	typename T::const_iterator end(coll.end());		//���� ��ġ
	for (pos = coll.begin(); pos != end; ++pos)
		std::cout << *pos << ' ';
	
	std::cout << '\n';
}