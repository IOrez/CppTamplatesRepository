#include "stacknontype.hpp"
#include <iostream>
#include <string>

int main()
{
	Stack<int, 20>			int20Stack;		//최대 20개의 정수를 가질 수 있는 스택
	Stack<int, 40>			int40Stack;		//최대 40개의 정수를 가질 수 있는 스택
	Stack<std::string, 40>	stringStack;	//최대 40개의 문자열을 가질 수 있는 스택

	//최대 20개의 정수를 가질 수 있는 스택 조작
	int20Stack.push(7);
	std::cout << int20Stack.top() << '\n';
	int20Stack.pop();

	//최대 40개의 문자열을 가질 수 있는 스택 조작
	stringStack.push("hello");
	std::cout << stringStack.top() << '\n';
	stringStack.pop();
}