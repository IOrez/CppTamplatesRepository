//typedef Ű���� ����ϱ�

#include "../a06_�⺻ Ŭ���� ���ø� ����/stack3.hpp"
typedef Stack<int> IntStack;
void foo(IntStack const& s);
IntStack istack[10];





//using Ű���� ����ϱ�(c++ 11)
using IntStack = Stack<int>;


//�̹� �ִ� ���Ŀ� ���� ���ο� �̸��� �����ϴ� �� �� ���� ����� ���� ��Ī ����(type alias declaration)�̶��ϰ� ���ο� �̸��� ���� ��Ī(type alias)�̶� �Ѵ�.

//��Ī ���ø�
#include <deque>
#include "..\a03_������\example1.hpp"
template <typename T>
using DequeStack = Stack<T, std::deque<T>>;

//�Ϲ������� ���ø��� ����/���ӽ����̽� �����̳� Ŭ���� ���� �������� ����ǰ� ���ǵ� �� �ִٴ� ��!!!!!!!!!!!!!!!!!!!!!!!!!!


//���� Ư�� ���̻� _t

/*
	std::add_const_t<T>//c++14
	typename std::add_const<T>::type	//c++11
*/

