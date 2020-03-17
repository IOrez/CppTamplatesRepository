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


	//T2���� ��ҿ� ���� ���� �Ҵ�
	template <typename T2>
	Stack& operator=(Stack<T2> const&);
	//T2���� Stack<T2>�� ���� ���� ����� �����ϱ� ����
	template <typename> friend class Stack;
};