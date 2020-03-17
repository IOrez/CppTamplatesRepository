#include "stack6decl.hpp"
template <typename T>
template <typename T2>
Stack<T>& Stack<T>::operator=(Stack<T2> const& op2)
{
	elems.clear();				//이미 있는 요소 제거
	elems.insert(elems.begin(),	//시작 부분에 삽입
		op2.elems.begin(), op2.elems.end());//op2의 모든 요소를 삽입함
	return *this;
}
