#include <iostream>
void print()
{

}


template <typename T, typename ... Types>
void print(T firstArg, Types... args)
{
	std::cout << firstArg << '\n';			//ù ���� ���� ���
	print(args...);							//������ ���ڿ� ���� print()ȣ��
}


/*
	�ϳ� �̻��� ���ڸ� ���޹����� ù ��° ���ڸ� ���� ����ؼ� �� ���ڸ� ����� �� ������ ���ڵ��� ��������� print()�Լ��� ȣ���Ѵ�.
	�̶� ������ ���ڵ��� ��Ÿ���� args�� �Լ� �Ķ���� �ٷ���(function parameter pack)��.

	���ø� �Ķ���� �ٷ���(template parameter pack)�� �ϴ� Types�� ����Ѵ�.
	template<typename T,typename.. Types>
*/

#include <string>

int main()
{
	std::string s("world");
	print(7.5, "hello", s);
}