#pragma once

//코드에서 어떤 인자로 함수 템플릿을 호출하면 코드가 건넨 인자에 기반을 두고 템플릿 파라미터를 결정한다.
//파라미터형 T로 두 int를 넘긴다면 C++ 컴파일러는 T가 int라고 결론을 내린다.

template <typename T>
T max(T const& a, T const& b)
{
	return b < a ? a : b;
}

//int를 전달하면 T는 int로 연역(deduction)된다. 함수파라미터는 int const&에 일치하기 때문이다.

/*
	자동형식변환이 적용되지 않는다는 점을 알아두자
	#1 호출파라미터를 참조자로 선언하면 사소한 변환도 형식 연역에 적용되지 않는다. 같은 템플릿 파라미터 T로 선언된 두 인자의 형식은 완전히 동일해야한다.
	#2 호출파라미터를 값으로 선언하면 형 소실에 해당하는 사소한 변환은 지원한다. const나 volatile로 한정한 것은 무시하며, 참조자는 참조된 형식으로 변환하고,
	 배열이나 함수는 그에 맞는 포인터형으로 바뀐다. 템플릿 파라미터 T로 선언된 두 인자에 대해 형 소실이 일어나고 난 후의 형식이 서로 완전히 같아야 한다.
*/

/*
	max(4,7.2); <- 오류: T는 int로도 double로도 연역될 수 있다.
	std::string s;
	foo("hello",s); <- 오류: T는 char const[6]로도, std::string로도 연역될 수 있다.
*/

//기본 호출 인자에 대해서는 형식 연역을 하지않는다.

//template <typename T>
//void f(T = "") {}

//f(1);
//f(); <- 오류
#include <string>
template <typename T=std::string>
void f(T = "");

//f();
