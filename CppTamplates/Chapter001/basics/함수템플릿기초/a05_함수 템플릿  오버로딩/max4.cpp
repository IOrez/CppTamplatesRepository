#include <iostream>

// � �����̵� �� �� �� �ִ�
template<typename T>
T max(T a, T b)
{
	std::cout << "max<T>()\n";
	return b < a ? a : b;
}

// � �����̵� �� �� �� �ִ�
template<typename T>
T max(T a, T b, T c)
{
	return max(max(a, b), c);
	//����  ������ �ʹ� �ʰ� ���Ա� ������ int�� ���ؼ��� ���ø� ���� ���
}

// �� int�� �� �ִ�
int max(int a, int b)
{
	std::cout << "max(int,int)\n";
	return b < a ? a : b;
}

int main()
{
	::max(47, 11, 33); //max(int,int)��� max<T>()�� ����Ѵ�
}