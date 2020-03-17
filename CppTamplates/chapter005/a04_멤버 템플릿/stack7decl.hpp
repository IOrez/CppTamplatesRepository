#include <deque>
template <typename T,typename Cont = std::deque<T>>
class Stack {
private:
	Cont elems;					//���
public:
	void push(T const&);		//��� �о� �ֱ�
	void pop();					//��� ������
	T const& top() const;		//����� ��� ��ȯ
	bool empty()const {
		return elems.empty();
	}

	//T2���� ��ҿ� ���� ���� �Ҵ�
	template <typename T2,typename Cont2>
	Stack& operator = (Stack<T2, Cont2>const&);
	//T2���� Stack<T2>�� ���� ���� ����� �����ϱ� ����
	template <typename, typename> friend class Stack;
};