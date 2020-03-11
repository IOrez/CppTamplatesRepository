#include <iostream>
#include <string>
#include "stackauto.hpp"

int main()
{
	Stack<int, 20u>			int20Stack;			//�ִ� 20���� ������ ���� �� �ִ� ����
	Stack<std::string, 40>	stringStack;		//�ִ� 40���� ���ڿ��� ���� �� �ִ� ����

	//�ִ� 20���� ������ ���� �� �ִ� ���� ����
	int20Stack.push(7);
	std::cout << int20Stack.top() << '\n';
	auto size1 = int20Stack.size();


	//�ִ� 40���� ���ڿ��� ���� �� �ִ� ���� ����
	stringStack.push("hello");
	std::cout << stringStack.top() << '\n';
	auto size2 = stringStack.size();

	if (!std::is_same_v<decltype(size1), decltype(size2)>)
	{
		std::cout << "size types differ\n";
	}
}