#pragma once
#include <complex>
template <typename T>
T max(T a, T b)
{
	return b < a ? a : b;
}

std::complex<float> f1, f2;		// <�����ڸ� �������� �ʴ´�.


/*
	���ø��� �ι� ������ �Ѵ�
	1. ���� �ð��� �ν��Ͻ�ȭ ���� ���ø� �Ķ���ʹ� ������ ä ���ø� ��ü�� ������ ��Ȯ���� �˻��Ѵ�.
	2. �ν��Ͻ�ȭ �Ǵ� �������� ��� �ڵ尡 ��ȿ���� Ȯ���ϱ� ���� ���ø� �ڵ带 (�ٽ�) �˻��Ѵ�. Ư�� ���ø� �Ķ���Ϳ� ���ӵ� �κ��� �� �� �˻��Ѵ�.

*/

template<typename T>
void foo(T t)
{
	undexlared();			//undeclared()�� �˷����� �ʾҴٸ� ù ��° �ܰ� ������ ����
	undexlared();			//undeclared()�� �˷����� �ʾҴٸ� �� ��° �ܰ� ������ ����

	static_assert(sizeof(int) > 10, "int too small");	//sizeof(int)<=10�̶�� �׻� ����
	static_assert(sizeof(T) > 10, "T too small");		//ũ�Ⱑ 10���� �۰ų� ���� T�� �ν��Ͻ�ȭ �ƴٸ� ����
}


int main()
{
	::max(f1,f2);		//������ �� ���� �߻�
}

