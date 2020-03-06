#include "../a00_Ŭ���� ���ø� Stack�� ����/stack1.hpp"
#include <iostream>
#include <string>


void foo(Stack<int> const& s)
{
	using IntStack = Stack<int>;		//IntStack�� Stack<int>�� ���� �� �ٸ� �̸��̴�.
	Stack<int> istack[10];				//istack�� ���� ���� 10���� �̷��� �迭�̴�.
	IntStack istack2[10];				//istack2�� ���� ���� 10��(���� ������ ����)�� �̷��� �迭�̴�.
}

Stack<float*> floatPtrStack;			//float�� ���� �������� ����
Stack<Stack<int> > intStackStack;		//���� ������ ����

int main()
{
	Stack<int>							intStack;		// ������ ����
	Stack<std::string>					stringStack;	// ���ڿ��� ����

	//���� ���� ����
	intStack.push(7);
	std::cout << intStack.top() << '\n';

	//���ڿ� ���� ����
	stringStack.push("hello");
	std::cout << stringStack.top() << '\n';
	stringStack.pop();
	return 0;
}