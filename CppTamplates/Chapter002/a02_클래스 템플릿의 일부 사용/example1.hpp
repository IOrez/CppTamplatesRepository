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
			strm << elem << ' ';		//��� ��ҿ� ���� << ȣ��
		}
	}
};


// ������� ���ÿ� ���� printOn()�� ȣ���Ѵٸ� �ش� ������� ���ؼ��� operator<<�� ȣǮ�ϰ� �ν��Ͻ�ȭ�� �� ���ٰ� ������ �߻��� ���̴�.

template<typename T>
class C
{
	static_assert(std::is_default_constructible<T>::value, "Class C requires default-contructible elements");
};