#include "stack3.hpp"
#include <iostream>
#include <deque>

int main()
{
	//정수의 스택
	Stack<int> intStack;

	//요소를 관리할 때 std::deque<>를 쓰는 double의 스택
	Stack<double, std::deque<double>> dblStack;

	//정수 스택 조작
	intStack.push(7);
	std::cout << intStack.top() << '\n';
	intStack.pop();

	//double 스택 조작
	dblStack.push(42.42);
	std::cout << dblStack.top() << '\n';
	dblStack.pop();
}