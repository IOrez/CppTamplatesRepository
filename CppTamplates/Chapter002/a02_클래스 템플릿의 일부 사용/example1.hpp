#pragma once
#include <iostream>
#include <vector>
#include <cassert>

template <typename T>
class Stack
{
	/*...*/

	std::vector<T> elems;

	void push(T const& elem)
	{
		elems.push_back(elem);
	}

	T pop()
	{
		assert(!elems.empty());
		T elem = elems.back();
		elems.pop_back();
		return elem;
	}

	T const& top()
	{
		assert(!elems.empty());
		T elem = elems.back();
		return elem;
	}

	void printOn()(std::ostream& strm)const
	{
		for (T const& elem : elems)
		{
			strm << elem << ' ';		//모든 요소에 대해 << 호출
		}
	}
};


// 만들어진 스택에 대해 printOn()을 호출한다면 해당 요소형에 대해서는 operator<<를 호풀하게 인스턴스화할 수 없다고 오류가 발생할 것이다.

template<typename T>
class C
{
	static_assert(std::is_default_constructible<T>::value, "Class C requires default-contructible elements");
};