

/*template <double VAT>					//오류: 부동소수점은 템플릿 파라미터로 사용될 수 없다.
double process(double v)
{

}
*/

/*
	#include <string>
	template <std::string name>			//오류: 클래스형 객체는 템플릿 파라미터로 사용될 수 없다.
	class myClass
	{

	}
*/

template <char const* name>
class MyClass
{

};

//MyClass<"hello"> x;					//오류: 문자열 리터럴인 "hello"는 쓸 수 없다.

extern char const s03[] = "hi";			//외부 링크
char const s11[] = "hi";				//내부 링크

template <char const* name>
class Message
{

};

int main() 
{
	Message<s03> m03;					//모든 버전에서 ok
	Message<s11> m11;					//C++11에서부터 ok
	static char const s17[] = "hi";		//링크 없음
	Message<s17> m17;					//C++17에서부터 OK
}