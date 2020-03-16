#include <iostream>

template <typename T>
struct MyClass;			//기본 템플릿

template <typename T,std::size_t SZ>
struct MyClass<T[SZ]>	//크기가 알려진 배열을 위한 특수화
{
	static void print() { std::cout << "print() fo T[" << SZ << "]" << "]\n"; }
};

template <typename T, std::size_t SZ>
struct MyClass<T(&)[SZ]> //크기가 알려진 배열에 대한 참조자를 위한 부분 특수화
{
	static void print() { std::cout << "print() for T(&)[" << SZ << "]\n"; }
};

template <typename T>
struct MyClass<T[]>		//크기가 알려지지 않은 배열을 위한 부분 특수화
{
	static void print() { std::cout << "print() for T[]\n"; }
};

template <typename T>	//크기가 알려지지 않은 배열에 대한 참조자를 위한 부분수화
struct MyClass<T(&)[]>
{
	static void print() { std::cout << "print() for T(&)[]\n"; }
};

template <typename T>
struct MyClass<T*>		//포인터를 위한 부분 특수화
{
	static void print() { std::cout << "print() for T*\n"; }
};