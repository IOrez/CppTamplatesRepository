#include <vector>
#include <cassert>
#include <utility>

template <typename T>
class Stack
{
private:
	std::vector<T> elems;
public:
	Stack() = default;
	Stack(T	 elem) :elems({ std::move(elem) }) {}		//Ŭ���� ���ø� ���� �������� �� �ҽǵǰ� ������ ���� �� ���� ��ҷ� ���� �ʱ�ȭ
};

int main() 
{
	Stack<int> intStack1;					//���ڿ��� ����
	Stack<int> intStack2 = intStack1;		//��� �������� OK

	Stack intStack3 = intStack1;			//C++17�������� ����
	Stack intStack4 = 0;					//C++17�������� Stack<int>�� ������
	Stack stringStack = "buttom";			//C++17�������� Stack<char const[7]>�� ������
	return 0;
}