#include "arrays.hpp"
template <typename T1,typename T2,typename T3>
void foo(int a1[7], int a2[],		//언어 법칙에 따른 포인터
	int(&a3)[42],					//크기가 알려진 배열에 대한 참조자
	int(&x0)[],						//크기가 알려지지 않은 배열에 대한 참조자
	T1 x1,							//값으로 전달 시 형 소실
	T2& x2,T3&& x3)					//참조로 전달
{
	MyClass<decltype(a1)>::print();				//MyClass<T*>사용
	MyClass<decltype(a2)>::print();				//MyClass<T*>사용
	MyClass<decltype(a3)>::print();				//MyClass<T(\&)[SZ]>사용
	MyClass<decltype(x0)>::print();				//MyClass<T(\&)[]>사용
	MyClass<decltype(x1)>::print();				//MyClass<T*>사용
	MyClass<decltype(x2)>::print();				//MyClass<T(\&)[]>사용
	MyClass<decltype(x3)>::print();				//MyClass<T(\&)[]>사용
}

int main()
{
	int a[42];
	MyClass<decltype(a)>::print();				//MyClass<T[SZ]>사용

	extern int x[];								//배열 선행 선언
	MyClass<decltype(x)>::print();				//MyClass<T[]>사용

	foo(a, a, a, x, x, x, x);
	return 0;
}

int x[] = { 0,8,15 };