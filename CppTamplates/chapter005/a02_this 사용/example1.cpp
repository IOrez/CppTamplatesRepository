template <typename T>
class Base
{
public:
	void bar();
};

template <typename T>
class Derived :Base<T>
{
public :
	void foo() {
		//bar();		//�ܺ� bar()�� ȣ���ϰų� ����
		this->bar();	//���1
		Base<T>::bar();	//���2
	}
};