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
C<(i)> x;									// N�� int&
//C<i>   y;

int main()
{
	Message<42> msg1;
	msg1.print();							//���� �� 42�� �ʱ�ȭ�� �� ���

	static char const s[] = "hello";		
	Message<s> msg2;						//char const[6]�� "hello"�� �ʱ�ȭ
	msg2.print();							//�׷� �� �� ���
}