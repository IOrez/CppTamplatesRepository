#include <deque>
template <typename T,template <typename Elem> class Cont = std::deque>
class Stack 
{
private:
	Cont<T> elems;			//요소

public:
	void push(T const&);	//요소 밀어넣기
	void pop();				//요소 꺼내기
	T const& top()const;	//꼭대기 요소 반환

	bool empty()const {		//스택이 비었는지 여부 반환
		return elems.empty();
	}
};

template <typename T,template <typename>class Cont >
void Stack<T, Cont>::push(T const& elem)
{
	elems.push_back(elem);
}