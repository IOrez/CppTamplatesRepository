#include <vector>
#include <cassert>
#include <vector>

template <typename T,typename Cont = std::vector<T>>
class Stack 
{
private:
	Cont elems;							//요소

public:
	void push(T const& elem);			//요소 밀어 넣기		
	void pop();							//요소 꺼내기
	T const& top() const;				//꼭대기 요소 반환
	bool empty() const {				//스택이 비었는지 여부 반환
		return elems.empty();
	}
};

template <typename T,typename Cont>
void Stack<T, Cont>::push(T const& elem)
{
	elems.push_back(elem);				//전달받은 elem의 복사본을 덧붙인다.
}

template <typename T,typename Cont>
void Stack<T, Cont>::pop()
{
	assert(!elems.empty());
	elems.pop_back();					//마지막 요소를 제거한다.
}

template <typename T, typename Cont>
T const& Stack<T,Cont>::top()const
{
	assert(!elems.empty());
	return elems.back();				//마지막 요소의 복사본을 반환한다.
}