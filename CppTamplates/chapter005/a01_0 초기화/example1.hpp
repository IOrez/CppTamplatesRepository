template <typename T>
void foo()
{
	T x{};		//x는 T가 내장 형식일 경우, 0(혹은 거짓)을 갖는다.
}

template <typename T>
class MyClass
{
private:
	T x;
public:
	MyClass() :x{} {//내장 형식일 경우에도 x가 초기화되게 한다.

	}
};

template <typename T>
void foo(T x = T{}) {//C++11이전에는 T()를 써야함

}