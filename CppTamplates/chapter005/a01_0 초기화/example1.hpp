template <typename T>
void foo()
{
	T x{};		//x�� T�� ���� ������ ���, 0(Ȥ�� ����)�� ���´�.
}

template <typename T>
class MyClass
{
private:
	T x;
public:
	MyClass() :x{} {//���� ������ ��쿡�� x�� �ʱ�ȭ�ǰ� �Ѵ�.

	}
};

template <typename T>
void foo(T x = T{}) {//C++11�������� T()�� �����

}