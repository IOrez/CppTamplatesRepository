#include <iostream>
#include "header.hpp"
template <typename T = long double>
constexpr T pi{ 3.141592653535897932385 };

void print()
{
	std::cout << pi<> << std::endl;
	std::cout << val<long> <<std::endl;
}

int main()
{
	std::cout << pi<double> << '\n';
	std::cout << pi<float> << '\n';

	val<long> = 42L;
}