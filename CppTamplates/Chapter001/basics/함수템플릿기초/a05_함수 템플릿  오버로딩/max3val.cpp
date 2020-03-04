#include <cstring>
#include <string>

// 어떤 형식이든 두 값중 최댓값
template<typename T>
T max(T a, T b)
{
	return b < a ? a : b;
}

//두 포인터 중 최댓값
template<typename T>
T* max(T* a, T* b)
{
	return *b < *a ? a : b;
}

//C문자열 중 최댓값
char const* max(char const* a, char const* b)
{
	return std::strcmp(b, a) <0? a : b;
}

int main()
{
	int a = 7;
	int b = 42;
	auto m1 = ::max(a, b);			//int값를 위한 max()

	std::string s1 = "hey";
	std::string s2 = "you";
	auto m2 = ::max(s1, s2);		//std::string값을 위한 max()

	int* p1 = &b;
	int* p2 = &a;
	auto m3 = ::max(p1, p2);		//포인터형을 위한 max()

	char const* x = "hello";
	char const* y = "world";
	auto m4 = ::max(x, y);			//C문자열 값을 위한 max()
}