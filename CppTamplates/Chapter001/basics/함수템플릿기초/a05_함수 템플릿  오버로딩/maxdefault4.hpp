#pragma once
template <typename T1,typename T2>
auto max(T1 a, T2 b)
{
	return b < a ? a : b;
}

template<typename RT,typename T1,typename T2>
RT max(T1 a, T2 b)
{
	return b < a ? a : b;
}


//auto a = ::max(4,7.2);
//auto b = ::max<long double>(7.2,4);



//auto c = ::max<int>(4,7.2); <- 오류ㅣ두 함수 템플릿 모두 일치함