#include <iostream>

template <auto T>
class Message
{
public:
	void print() {
		std::cout << T << std::'\n';
	}
};

template <decltype(auto) N>
class C {

};

int i;
C<(i)> x;									// N은 int&
//C<i>   y;

int main()
{
	Message<42> msg1;
	msg1.print();							//정수 값 42로 초기화한 후 출력

	static char const s[] = "hello";		
	Message<s> msg2;						//char const[6]인 "hello"로 초기화
	msg2.print();							//그런 후 값 출력
}