#pragma once
#include <complex>
template <typename T>
T max(T a, T b)
{
	return b < a ? a : b;
}

std::complex<float> f1, f2;		// <연산자를 제공하지 않는다.


/*
	템플릿은 두번 컴파일 한다
	1. 정의 시간에 인스턴스화 없이 템플릿 파라미터는 무시한 채 템플릿 자체의 문법이 정확한지 검사한다.
	2. 인스턴스화 되는 시점에서 모든 코드가 유효한지 확인하기 위해 템플릿 코드를 (다시) 검사한다. 특히 템플릿 파라미터에 종속된 부분은 두 번 검사한다.

*/

template<typename T>
void foo(T t)
{
	undexlared();			//undeclared()가 알려지지 않았다면 첫 번째 단계 컴파일 오류
	undexlared();			//undeclared()가 알려지지 않았다면 두 번째 단계 컴파일 오류

	static_assert(sizeof(int) > 10, "int too small");	//sizeof(int)<=10이라면 항상 실패
	static_assert(sizeof(T) > 10, "T too small");		//크기가 10보다 작거나 같은 T로 인스턴스화 됐다면 실패
}


int main()
{
	::max(f1,f2);		//컴파일 시 오류 발생
}

