#include "arrays.hpp"
template <typename T1,typename T2,typename T3>
void foo(int a1[7], int a2[],		//��� ��Ģ�� ���� ������
	int(&a3)[42],					//ũ�Ⱑ �˷��� �迭�� ���� ������
	int(&x0)[],						//ũ�Ⱑ �˷����� ���� �迭�� ���� ������
	T1 x1,							//������ ���� �� �� �ҽ�
	T2& x2,T3&& x3)					//������ ����
{
	MyClass<decltype(a1)>::print();				//MyClass<T*>���
	MyClass<decltype(a2)>::print();				//MyClass<T*>���
	MyClass<decltype(a3)>::print();				//MyClass<T(\&)[SZ]>���
	MyClass<decltype(x0)>::print();				//MyClass<T(\&)[]>���
	MyClass<decltype(x1)>::print();				//MyClass<T*>���
	MyClass<decltype(x2)>::print();				//MyClass<T(\&)[]>���
	MyClass<decltype(x3)>::print();				//MyClass<T(\&)[]>���
}

int main()
{
	int a[42];
	MyClass<decltype(a)>::print();				//MyClass<T[SZ]>���

	extern int x[];								//�迭 ���� ����
	MyClass<decltype(x)>::print();				//MyClass<T[]>���

	foo(a, a, a, x, x, x, x);
	return 0;
}

int x[] = { 0,8,15 };