#include <vector>
#include <cassert>
#include <vector>

template <typename T,typename Cont = std::vector<T>>
class Stack 
{
private:
	Cont elems;							//���

public:
	void push(T const& elem);			//��� �о� �ֱ�		
	void pop();							//��� ������
	T const& top() const;				//����� ��� ��ȯ
	bool empty() const {				//������ ������� ���� ��ȯ
		return elems.empty();
	}
};

template <typename T,typename Cont>
void Stack<T, Cont>::push(T const& elem)
{
	elems.push_back(elem);				//���޹��� elem�� ���纻�� �����δ�.
}

template <typename T,typename Cont>
void Stack<T, Cont>::pop()
{
	assert(!elems.empty());
	elems.pop_back();					//������ ��Ҹ� �����Ѵ�.
}

template <typename T, typename Cont>
T const& Stack<T,Cont>::top()const
{
	assert(!elems.empty());
	return elems.back();				//������ ����� ���纻�� ��ȯ�Ѵ�.
}