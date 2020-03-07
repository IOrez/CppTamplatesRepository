#include "../a00_Ŭ���� ���ø� Stack�� ����/stack1.hpp"

//�����͸� ���� Ŭ���� Stack<>�� �κ� Ư��ȭ

template<typename T>
class Stack<T*> {
private:
	std::vector<T*>elems;			//���
public:
	void push(T*);					//��� �о� �ֱ�
	T* pop();						//��� ������
	T* top()const;					//����� ��� ��ȯ
	bool empty()const {				//������ ������� ���� ��ȯ
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
	elems.pop_back();				//������ ��Ҹ� �����Ѵ�.
	return p;						//�׷� �� ��ȯ�Ѵ�.(�Ϲ����� ���� �ٸ�)
}

template<typename T>
T* Stack<T*>::top()const
{
	assert(!elems.empty());
	return elems.back();			//������ ����� ���纻�� ��ȯ�Ѵ�.
}