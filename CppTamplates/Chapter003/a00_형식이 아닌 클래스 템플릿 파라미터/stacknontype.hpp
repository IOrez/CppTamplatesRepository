#include <array>
#include <cassert>

template <typename T,std::size_t MaxSize>
class Stack
{
private:
	std::array<T, MaxSize> elems;			//요소
	std::size_t numElems;					//현재 요소 개수
public:
	Stack();								//생성자
	void push(T const& elem);				//요소 밀어 넣기
	void pop();								//요소 꺼내기
	T const& top() const;					//꼭대기 요소 반환
	bool empty() const {					//스택이 비었는지 여부 반환
		return numElems == 0;
	}
	std::size_t size()const {				//현재 요소 개수 반환
		return numElems;
	}
};

template <typename T,std::size_t MaxSize>
Stack<T, MaxSize>::Stack():numElems(0)		//가진 요소 없이 시작
{

}

template <typename T,std::size_t MaxSize>
void Stack<T, MaxSize>::push(T const& elem)	
{
	assert(numElems < MaxSize);
	elems[numElems] = elem;					//요소 덧붙임
	++numElems;								//요소 개수 증가
}

template <typename T,std::size_t MaxSize>
void Stack<T, MaxSize>::pop()
{
	assert(!elems.empty());
	--numElems;								//요소 개수 감소
}

template <typename T,std::size_t MaxSize>
T const& Stack<T, MaxSize>::top()const
{
	assert(!elems.empty());
	return elems[numElems-1];				//마지막 요소 반환
}