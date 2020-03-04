#pragma once
template <typename T1,typename T2>
auto max(T1 a, T2 b)		//반환형에 auto를 쓰면 실제 반환형에 연역하라는 뜻
{
	return b < a ? a : b;
}

template<typename T1,typename T2>
auto max(T1 a, T2 b)->decltype(b < a ? a : b)	//선언
{
	return b < a ? a : b;
}