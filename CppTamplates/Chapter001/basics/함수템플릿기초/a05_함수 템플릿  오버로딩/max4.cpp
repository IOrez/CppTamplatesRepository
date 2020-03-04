#include <iostream>

// 어떤 형식이든 두 값 중 최댓값
template<typename T>
T max(T a, T b)
{
	std::cout << "max<T>()\n";
	return b < a ? a : b;
}

// 어떤 형식이든 세 값 중 최댓값
template<typename T>
T max(T a, T b, T c)
{
	return max(max(a, b), c);
	//다음  선언이 너무 늦게 나왔기 때문에 int에 대해서도 템플릿 버전 사용
}

// 두 int값 중 최댓값
int max(int a, int b)
{
	std::cout << "max(int,int)\n";
	return b < a ? a : b;
}

int main()
{
	::max(47, 11, 33); //max(int,int)대신 max<T>()를 사용한다
}