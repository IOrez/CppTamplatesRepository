//두 int값 중 최댓값
int max(int a, int b)
{
	return b < a ? a : b;
}

// 어떤 형식이든 두 값 중 최댓값
template <typename T>
T max(T a, T b)
{
	return b < a ? a : b;
}

int main()
{
	::max(7, 42);						//두 int를 위한 템플릿이 아닌 함수 호출
	::max(7.0, 42.0);					//max<double>호출(인자 연역 사용)
	::max('a', 'b');					//max<char>호출(인자 연역 사용)
	::max<>(7, 42);						//max<int>호출(인자 연역 사용)
	::max<double>(7, 42);				//max<double>호출(인자 연역 사용하지 않음)
	::max('a', 42.7);					//두 int를 위한 템플릿이 아닌 함수 호출
}