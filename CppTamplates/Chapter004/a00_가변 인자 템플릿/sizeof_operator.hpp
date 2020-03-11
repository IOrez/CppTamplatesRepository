#include <iostream>

template <typename T, typename... Types>
void print(T firstArg, Types... args)
{
	std::cout << sizeof...(Types) << '\n';	//남은 형식의 수 출력
	std::cout << sizeof...(args) << '\n';	//남은 인자의 수 출력
}

int main()
{
	return 0;
}