#include <iostream>

template <typename T>
struct MyClass;			//�⺻ ���ø�

template <typename T,std::size_t SZ>
struct MyClass<T[SZ]>	//ũ�Ⱑ �˷��� �迭�� ���� Ư��ȭ
{
	static void print() { std::cout << "print() fo T[" << SZ << "]" << "]\n"; }
};

template <typename T, std::size_t SZ>
struct MyClass<T(&)[SZ]> //ũ�Ⱑ �˷��� �迭�� ���� �����ڸ� ���� �κ� Ư��ȭ
{
	static void print() { std::cout << "print() for T(&)[" << SZ << "]\n"; }
};

template <typename T>
struct MyClass<T[]>		//ũ�Ⱑ �˷����� ���� �迭�� ���� �κ� Ư��ȭ
{
	static void print() { std::cout << "print() for T[]\n"; }
};

template <typename T>	//ũ�Ⱑ �˷����� ���� �迭�� ���� �����ڸ� ���� �κм�ȭ
struct MyClass<T(&)[]>
{
	static void print() { std::cout << "print() for T(&)[]\n"; }
};

template <typename T>
struct MyClass<T*>		//�����͸� ���� �κ� Ư��ȭ
{
	static void print() { std::cout << "print() for T*\n"; }
};