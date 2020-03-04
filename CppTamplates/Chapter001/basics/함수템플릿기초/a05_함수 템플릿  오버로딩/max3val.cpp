#include <cstring>
#include <string>

// � �����̵� �� ���� �ִ�
template<typename T>
T max(T a, T b)
{
	return b < a ? a : b;
}

//�� ������ �� �ִ�
template<typename T>
T* max(T* a, T* b)
{
	return *b < *a ? a : b;
}

//C���ڿ� �� �ִ�
char const* max(char const* a, char const* b)
{
	return std::strcmp(b, a) <0? a : b;
}

int main()
{
	int a = 7;
	int b = 42;
	auto m1 = ::max(a, b);			//int���� ���� max()

	std::string s1 = "hey";
	std::string s2 = "you";
	auto m2 = ::max(s1, s2);		//std::string���� ���� max()

	int* p1 = &b;
	int* p2 = &a;
	auto m3 = ::max(p1, p2);		//���������� ���� max()

	char const* x = "hello";
	char const* y = "world";
	auto m4 = ::max(x, y);			//C���ڿ� ���� ���� max()
}