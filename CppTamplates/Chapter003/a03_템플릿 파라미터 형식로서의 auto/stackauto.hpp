#include <array>
#include <cassert>

template <typename T,auto Maxsize>
class Stack
{
public:
	using size_type = decltype(Maxsize);
private:
	std::array<T, Maxsize>elems;			//요소
	size_type numElems;						//현재 요소 개수

public:
	Stack();								//생성자
	void push(T const& elem);				//요소 밀어 넣기
	void pop();								//요소 꺼내기
	T const& top()const;					//꼭대기 요소 반환
	bool empty()const {						//스택이 비었는지 여부 반환
		return numElems == 0;
	}
	size_type size()const {					//현재 요소 개수 반환
		return numElems;
	}
};

template <typename T,auto Maxsize>
Stack<T,Maxsize>::Stack():numElems(0){}		//가진 요소 없이 시작

template <typename T,auto Maxsize>
void Stack<T, Maxsize>::push(T const& elem)
{
	assert(numElems < Maxsize);
	elems[numElems] = elem;					//요소 덧붙임
	++numElems;								//요소 개수 증가
}

template <typename T,auto Maxsize>
void Stack<T, Maxsize>::pop()
{
	assert(!elems.empty());
	--numElems;								//요소 개수 감소
}

template <typename T,auto Maxsize>
T const& Stack<T, Maxsize>::top()const 
{
	assert(!elems.empty());
	return elems[numElems - 1];				//마지막 요소 반환
}

