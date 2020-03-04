#pragma once
template<typename T1,typename T2>
T1 max(T1 a, T2 b)
{
	return b < a ? a : b;
}

template<typename RT,typename T1,typename T2>
RT max(T1 a, T2 b)
{
	return b < a ? a : b;
}



int main()
{
	auto m = ::max(4,7.2); //하지만 반환형이 첫 번째 인자의 형식으로 정해진다.
	auto m1 = ::max<int, double, double>(4, 7.2); //인자 목록 명시해야한다!!
		 m1 = ::max<double>(4, 7.2); //암묵적으로 결정할 수 없는 형식의 앞에 있는 모든 인자형은 모두 명시해야한다.!!


}

/*
		해결방법
	1. 반환형을 명시하는 세 번째 템플릿 파라미터를 도입한다.		<-연역 불가, 템플릿 인자 목록 명시!!
	2. 컴파일러가 반환형을 찾아내게 한다.
	3. 반환형을 두 파라미터형의 '공통 형식'으로 선언한다.
*/

