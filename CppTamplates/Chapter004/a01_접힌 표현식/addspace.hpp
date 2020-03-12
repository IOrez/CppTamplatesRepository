#include <iostream>

template <typename T>
class AddSpace
{
private:
	T const& ref;				//생성자에 전달된 인자를 가리킴
public:
	AddSpace(T const& r) : ref(r) {}

	friend std::ostream& operator << (std::ostream& os, AddSpace<T> s) {
		return os << s.ref << ' ';
	}
};

template <typename... Args>
void print(Args... args)
{
	(std::cout << ... << AddSpace(args)) << '\n';
}