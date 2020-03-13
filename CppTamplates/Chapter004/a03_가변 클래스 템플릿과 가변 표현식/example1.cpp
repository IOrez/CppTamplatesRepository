#include <iostream>
#include <string>
#include <complex>

template <typename... Type>
void print(Type... args) 
{
	(std::cout << ... << args);
}

template <typename... T>
void printDouble(T const&... args)
{
	print(args + args...);
	//-> print(7.5+7.5,std::string("Hello")+std::string("Hello"),std::complex<float>(4,2)+std::complex<float>(4,2));
}

template <typename T>
std::ostream& operator <<(std::ostream& strm, std::complex<T> const& obj)
{
	strm << "(" << obj.real() << "," << obj.imag() << ")";
	return strm;
}

template <typename... T>
void addOne(T const&... args)
{
	//print(args + 1 ...);  //����: 1...�� �Ҽ����� �ʹ� ���� ���ͷ��̴�.
	print(args + 1 ...);	//OK
	print((args + 1)...);	//OK
}

template <typename T1,typename... TN>
constexpr bool isHomogeneous(T1, TN...)
{
	return (std::is_same<T1, TN>::value &&...);	//C++17���� ���� ����
}



int main()
{
	printDouble(7.5, std::string("Hello"), std::complex<float>(4, 2));

	isHomogeneous(43, -1, "hello");
	//std::is_same<int,int>::value&&std::is_same<int,char const*>::value

	isHomogeneous("hello", "", "world", "!");
	//��� ���ڰ� char const*�� �����ȴ�!!


}