#include <iostream>
#include <string>

template <typename T>
class ValueWithComment
{
public:
	ValueWithComment() = default;
	ValueWithComment(char const* a, char const* b)
	{
		value = a;
		comment = b;
	};

	template <typename U>
	friend std::ostream& operator << (std::ostream& strm, ValueWithComment<U> obj);
private:
	T value;
	std::string comment;
};



ValueWithComment(char const*, char const* b)->ValueWithComment<std::string>;

int main()
{
	ValueWithComment<int> vc;
	//vc.value = 42;
	//vc.comment = "initial value";

	ValueWithComment vc2 = { "hello","initial value" };
	
	//std::cout << vc << std::endl;
	std::cout << vc2 << std::endl;
}

template <typename T>
std::ostream& operator << (std::ostream& strm, ValueWithComment<T> obj)
{
	strm << "value = " << obj.value << "\n";
	strm << "comment = " << obj.comment;
	return strm;
}
