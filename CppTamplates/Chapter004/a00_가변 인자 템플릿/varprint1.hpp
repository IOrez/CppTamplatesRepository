#include <iostream>
void print()
{

}


template <typename T, typename ... Types>
void print(T firstArg, Types... args)
{
	std::cout << firstArg << '\n';			//첫 번쨰 인자 출력
	print(args...);							//나머지 인자에 대해 print()호출
}


/*
	하나 이상의 인자를 전달받으면 첫 번째 인자만 따로 명시해서 그 인자만 출력한 후 나머지 인자들은 재귀적으로 print()함수를 호출한다.
	이때 나머지 인자들을 나타내는 args는 함수 파라미터 꾸러미(function parameter pack)다.

	템플릿 파라미터 꾸러미(template parameter pack)라 하는 Types를 사용한다.
	template<typename T,typename.. Types>
*/

#include <string>

int main()
{
	std::string s("world");
	print(7.5, "hello", s);
}