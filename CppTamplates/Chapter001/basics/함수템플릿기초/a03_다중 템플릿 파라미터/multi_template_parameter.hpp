#pragma once
template<typename T1,typename T2>
T1 max(T1 a, T2 b)
{
	return b < a ? a : b;
}

template<typename RT,typename T1,typename T2>
RT max(T1 a, T2 b)
{
	return b < a ? a : b;
}



int main()
{
	auto m = ::max(4,7.2); //������ ��ȯ���� ù ��° ������ �������� ��������.
	auto m1 = ::max<int, double, double>(4, 7.2); //���� ��� ����ؾ��Ѵ�!!
		 m1 = ::max<double>(4, 7.2); //�Ϲ������� ������ �� ���� ������ �տ� �ִ� ��� �������� ��� ����ؾ��Ѵ�.!!


}

/*
		�ذ���
	1. ��ȯ���� ����ϴ� �� ��° ���ø� �Ķ���͸� �����Ѵ�.		<-���� �Ұ�, ���ø� ���� ��� ���!!
	2. �����Ϸ��� ��ȯ���� ã�Ƴ��� �Ѵ�.
	3. ��ȯ���� �� �Ķ�������� '���� ����'���� �����Ѵ�.
*/

