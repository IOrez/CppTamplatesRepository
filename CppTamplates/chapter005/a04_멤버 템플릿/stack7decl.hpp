#include <deque>
template <typename T,typename Cont = std::deque<T>>
class Stack {
private:
	Cont elems;					//요소
public:
	void push(T const&);		//요소 밀어 넣기
	void pop();					//요소 꺼내기
	T const& top() const;		//꼭대기 요소 반환
	bool empty()const {
		return elems.empty();
	}

	//T2형의 요소에 대한 스택 할당
	template <typename T2,typename Cont2>
	Stack& operator = (Stack<T2, Cont2>const&);
	//T2형의 Stack<T2>이 가진 전용 멤버에 접근하기 위해
	template <typename, typename> friend class Stack;
};