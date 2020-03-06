#include "../a00_클래스 템플릿 Stack의 구현/stack1.hpp"
#include <iostream>
#include <string>


void foo(Stack<int> const& s)
{
	using IntStack = Stack<int>;		//IntStack은 Stack<int>에 대한 또 다른 이름이다.
	Stack<int> istack[10];				//istack은 정수 스택 10개로 이뤄진 배열이다.
	IntStack istack2[10];				//istack2은 정수 스택 10개(같은 형식을 가짐)로 이뤄진 배열이다.
}

Stack<float*> floatPtrStack;			//float에 대한 포인터의 스택
Stack<Stack<int> > intStackStack;		//정수 스택의 스택

int main()
{
	Stack<int>							intStack;		// 정수의 스택
	Stack<std::string>					stringStack;	// 문자열의 스택

	//정수 스택 조작
	intStack.push(7);
	std::cout << intStack.top() << '\n';

	//문자열 스택 조작
	stringStack.push("hello");
	std::cout << stringStack.top() << '\n';
	stringStack.pop();
	return 0;
}