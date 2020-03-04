#pragma once
#include <type_traits>
template <typename T1,typename T2>
auto max(T1 a, T2 b)-> typename std::decay<decltype(true ? a : b)>::type
{
	return b < a ? a : b;
}


//auto 형 초기화는 항상 형 소실된다.