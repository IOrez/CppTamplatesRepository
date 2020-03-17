#include <deque>

template <typename T>
class Stack {
private:
	std::deque<T> elems;
public:
	void push(T const&);
	void pop();
	T const& top()const;
	bool empty() const {
		return elems.empty();
	}


	//T2형의 요소에 대한 스택 할당
	template <typename T2>
	Stack& operator=(Stack<T2> const&);
	//T2형의 Stack<T2>이 가진 전용 멤버에 접근하기 위해
	template <typename> friend class Stack;
};