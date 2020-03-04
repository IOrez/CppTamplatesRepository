#include "max.hpp"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int i = 42;
	cout << "max(7,i): " << ::max(7, i) << '\n';		//::max(7,i) Àü¿ª namespace

	double f1 = 3.4;
	double f2 = -6.7;

	cout << "max(f1,f2): " << ::max(f1, f2) << '\n';

	string s1 = "mathmatics";
	string s2 = "math";

	cout << "max(s1,s2): " << ::max(s1, s2) << '\n';
	return 0;
}