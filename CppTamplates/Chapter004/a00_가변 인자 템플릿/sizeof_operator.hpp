#include <iostream>

template <typename T, typename... Types>
void print(T firstArg, Types... args)
{
	std::cout << sizeof...(Types) << '\n';	//���� ������ �� ���
	std::cout << sizeof...(args) << '\n';	//���� ������ �� ���
}

int main()
{
	return 0;
}