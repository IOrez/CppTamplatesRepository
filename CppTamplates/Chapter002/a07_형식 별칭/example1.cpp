//typedef 키워드 사용하기

#include "../a06_기본 클래스 템플릿 인자/stack3.hpp"
typedef Stack<int> IntStack;
void foo(IntStack const& s);
IntStack istack[10];





//using 키워드 사용하기(c++ 11)
using IntStack = Stack<int>;


//이미 있는 형식에 대해 새로운 이름을 정의하는 이 두 가지 방식을 형식 별칭 선언(type alias declaration)이라하고 새로운 이름을 형식 별칭(type alias)이라 한다.

//별칭 템플릿
#include <deque>
#include "..\a03_프렌드\example1.hpp"
template <typename T>
using DequeStack = Stack<T, std::deque<T>>;

//일반적으로 템플릿은 전역/네임스페이스 영역이나 클래스 선언 내에서만 선언되고 정의될 수 있다는 점!!!!!!!!!!!!!!!!!!!!!!!!!!


//형식 특질 접미사 _t

/*
	std::add_const_t<T>//c++14
	typename std::add_const<T>::type	//c++11
*/

