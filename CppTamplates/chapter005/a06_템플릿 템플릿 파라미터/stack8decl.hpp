#include <deque>
template <typename T,template <typename Elem> class Cont = std::deque>
class Stack 
{
private:
	Cont<T> elems;			//���

public:
	void push(T const&);	//��� �о�ֱ�
	void pop();				//��� ������
	T const& top()const;	//����� ��� ��ȯ

	bool empty()const {		//������ ������� ���� ��ȯ
		return elems.empty();
	}
};

template <typename T,template <typename>class Cont >
void Stack<T, Cont>::push(T const& elem)
{
	elems.push_back(elem);
}