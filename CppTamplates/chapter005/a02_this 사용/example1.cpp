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
		//bar();		//외부 bar()를 호출하거나 오류
		this->bar();	//방법1
		Base<T>::bar();	//방법2
	}
};