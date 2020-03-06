#include <vector>
#include <cassert>

template <typename T>
class Stack 
{
private:
	std::vector<T> elems;		//요소
public:
	void push(T const& elem);
	T pop();
	T const& top()const;
	bool empty()const { return elems.empty(); }
};

template <typename T>
void Stack<T>::push(T const& elem)
{
	elems.push_back(elem);	// 전달받은 elem의 복사본을 덧붙인다.
}

template<typename T>
T Stack<T>::pop()
{
	assert(!elems.empty());
	T elem = elems.back();	// 마지막 요소의 복사본을 저장한다
	elems.pop_back();		// 마지막 요소를 제거한다.
	return elem;			// 저장된 요소의 복사본을 반환
}

template <typename T>
T const& Stack<T>::top() const
{
	assert(!elems.empty());
	return elems.back();	// 마지막 요소의 복사본을 반환한다.
}

