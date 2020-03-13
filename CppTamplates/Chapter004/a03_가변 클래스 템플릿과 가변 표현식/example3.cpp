#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <tuple>

template <typename... Types>
void print(Types... args)
{
	(std::cout << ... << args) << std::endl;
}

//template <typename... Elements>
//class Tuple;
//Tuple<int, std::string, char> t;					//t�� ����, ���ڿ�, ���ڸ� ���� �� �ִ�.
//
//template <typename... Types>
//class Varient;
//Varient<int, std::string, char> v;					//v�� ����, ���ڿ�, ���ڸ� ���� �� �ִ�.

template <std::size_t...>
struct Indices{};

template <typename T,std::size_t... Idx>
void printByIdx(T t, Indices<Idx...>)
{
	print(std::get<Idx>(t)...);
}


int main()
{
	std::array<std::string, 5>arr = { "hello","my","new","!","World" };
	printByIdx(arr, Indices<0, 4, 3>());

	auto t = std::make_tuple (12, "monkeys", 2.0);
	printByIdx(t, Indices<0, 1, 2>());
}