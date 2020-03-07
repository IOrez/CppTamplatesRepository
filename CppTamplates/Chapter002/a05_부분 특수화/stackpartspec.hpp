#include "../a00_클래스 템플릿 Stack의 구현/stack1.hpp"

//포인터를 위한 클래스 Stack<>의 부분 특수화

template<typename T>
class Stack<T*> {
private:
	std::vector<T*>elems;			//요소
public:
	void push(T*);					//요소 밀어 넣기
	T* pop();						//요소 꺼내기
	T* top()const;					//꼭대기 요소 반환
	bool empty()const {				//스택이 비었는지 여부 반환
		return elems.empty();
	}
};

template<typename T>
void Stack<T*>::push(T* elem)
{
	elems.push_back(elem);
}

template<typename T>
T* Stack<T*>::pop()
{
	assert(!elems.empty());
	T* p = elems.back();
	elems.pop_back();				//마지막 요소를 제거한다.
	return p;						//그런 후 반환한다.(일반적인 경우와 다름)
}

template<typename T>
T* Stack<T*>::top()const
{
	assert(!elems.empty());
	return elems.back();			//마지막 요소의 복사본을 반환한다.
}