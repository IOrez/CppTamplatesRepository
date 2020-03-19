#include <iostream>
#include <string>
#include <vector>
template <typename T>
class MyClass
{
public:
	static constexpr int max = 1000;
};

template <typename T>
int myMax = MyClass<T>::max;

int main()
{
	auto i = myMax<std::string>;
	myMax<std::string> = 7;
	std::cout << myMax<std::vector<int>> << std::endl;
	std::cout << myMax<std::string> << std::endl;
}