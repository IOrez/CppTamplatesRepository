#include <iostream>
#include <string>
#include "stackauto.hpp"

int main()
{
	Stack<int, 20u>			int20Stack;			//최대 20개의 정수를 가질 수 있는 스택
	Stack<std::string, 40>	stringStack;		//최대 40개의 문자열을 가질 수 있는 스택

	//최대 20개의 정수를 가질 수 있는 스택 조작
	int20Stack.push(7);
	std::cout << int20Stack.top() << '\n';
	auto size1 = int20Stack.size();


	//최대 40개의 문자열을 가질 수 있는 스택 조작
	stringStack.push("hello");
	std::cout << stringStack.top() << '\n';
	auto size2 = stringStack.size();

	if (!std::is_same_v<decltype(size1), decltype(size2)>)
	{
		std::cout << "size types differ\n";
	}
}