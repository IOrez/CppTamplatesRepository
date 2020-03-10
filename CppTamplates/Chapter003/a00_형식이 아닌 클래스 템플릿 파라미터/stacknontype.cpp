#include "stacknontype.hpp"
#include <iostream>
#include <string>

int main()
{
	Stack<int, 20>			int20Stack;		//�ִ� 20���� ������ ���� �� �ִ� ����
	Stack<int, 40>			int40Stack;		//�ִ� 40���� ������ ���� �� �ִ� ����
	Stack<std::string, 40>	stringStack;	//�ִ� 40���� ���ڿ��� ���� �� �ִ� ����

	//�ִ� 20���� ������ ���� �� �ִ� ���� ����
	int20Stack.push(7);
	std::cout << int20Stack.top() << '\n';
	int20Stack.pop();

	//�ִ� 40���� ���ڿ��� ���� �� �ִ� ���� ����
	stringStack.push("hello");
	std::cout << stringStack.top() << '\n';
	stringStack.pop();
}