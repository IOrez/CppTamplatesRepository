#include <vector>
#include <cassert>

template <typename T>
class Stack 
{
private:
	std::vector<T> elems;		//���
public:
	void push(T const& elem);
	T pop();
	T const& top()const;
	bool empty()const { return elems.empty(); }
};

template <typename T>
void Stack<T>::push(T const& elem)
{
	elems.push_back(elem);	// ���޹��� elem�� ���纻�� �����δ�.
}

template<typename T>
T Stack<T>::pop()
{
	assert(!elems.empty());
	T elem = elems.back();	// ������ ����� ���纻�� �����Ѵ�
	elems.pop_back();		// ������ ��Ҹ� �����Ѵ�.
	return elem;			// ����� ����� ���纻�� ��ȯ
}

template <typename T>
T const& Stack<T>::top() const
{
	assert(!elems.empty());
	return elems.back();	// ������ ����� ���纻�� ��ȯ�Ѵ�.
}

