

/*template <double VAT>					//����: �ε��Ҽ����� ���ø� �Ķ���ͷ� ���� �� ����.
double process(double v)
{

}
*/

/*
	#include <string>
	template <std::string name>			//����: Ŭ������ ��ü�� ���ø� �Ķ���ͷ� ���� �� ����.
	class myClass
	{

	}
*/

template <char const* name>
class MyClass
{

};

//MyClass<"hello"> x;					//����: ���ڿ� ���ͷ��� "hello"�� �� �� ����.

extern char const s03[] = "hi";			//�ܺ� ��ũ
char const s11[] = "hi";				//���� ��ũ

template <char const* name>
class Message
{

};

int main() 
{
	Message<s03> m03;					//��� �������� ok
	Message<s11> m11;					//C++11�������� ok
	static char const s17[] = "hi";		//��ũ ����
	Message<s17> m17;					//C++17�������� OK
}