#include <deque>

template <typename T>
class Stack {
private:
	std::deque<T> elems;

public:
	void push(T const&);
	void pop();
	T const& top()const;
	bool empty()const {
		return elems.empty();
	}

	//T2형의 요소에 대한 스택할당
	template<typename T2>
	Stack& operator = (Stack<T2> const&);
};

template <typename T>
	template <typename T2>
	Stack<T>& Stack<T>::operator=(Stack<T2> const& op2)
	{
		Stack<T2> tmp(op2);							//할당된 스택에 대한 복사본 생성
		elems.clear();								//이미 있는 요소 제거
		while (!tmp.empty())						//모든 요소 복사
		{
			elems.push_front(tmp.top());
			tmp.pop();
		}
		return *this;
	}