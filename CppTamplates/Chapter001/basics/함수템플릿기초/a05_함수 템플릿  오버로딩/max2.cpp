//�� int�� �� �ִ�
int max(int a, int b)
{
	return b < a ? a : b;
}

// � �����̵� �� �� �� �ִ�
template <typename T>
T max(T a, T b)
{
	return b < a ? a : b;
}

int main()
{
	::max(7, 42);						//�� int�� ���� ���ø��� �ƴ� �Լ� ȣ��
	::max(7.0, 42.0);					//max<double>ȣ��(���� ���� ���)
	::max('a', 'b');					//max<char>ȣ��(���� ���� ���)
	::max<>(7, 42);						//max<int>ȣ��(���� ���� ���)
	::max<double>(7, 42);				//max<double>ȣ��(���� ���� ������� ����)
	::max('a', 42.7);					//�� int�� ���� ���ø��� �ƴ� �Լ� ȣ��
}