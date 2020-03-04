#include <cstring>

//어떤 형식이든 두 값 중 최댓값(참조로 호출)
template<typename T>
T const& max(T const& a, T const& b)
{
	return b < a ? a : b;
}

// C문자열 중 최댓값(값으로 호출)
char const* max(char const* a, char const* b)
{
	return std::strcmp(b, a) < 0 ? a : b;
}

// 어떤 형식이든 세 값 중 최댓값(참조로 호출)
template<typename T>
T const& max(T const& a, T const& b, T const& c)
{
	return max(max(a, b), c);
}


int main()
{
	auto m1 = ::max(7, 42, 68); //OK

	char const* s1 = "frederic";
	char const* s2 = "anica";
	char const* s3 = "lucas";

	auto m2 = max(s1, s2, s3); // 실행시간오류
	return 0;
}