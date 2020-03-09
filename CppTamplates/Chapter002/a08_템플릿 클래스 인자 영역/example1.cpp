#include <vector>
#include <cassert>
#include <utility>

template <typename T>
class Stack
{
private:
	std::vector<T> elems;
public:
	Stack() = default;
	Stack(T	 elem) :elems({ std::move(elem) }) {}		//클래스 템플릿 인자 연역으로 형 소실되게 값으로 받은 한 개의 요소로 스택 초기화
};

int main() 
{
	Stack<int> intStack1;					//문자열의 스택
	Stack<int> intStack2 = intStack1;		//모든 버전에서 OK

	Stack intStack3 = intStack1;			//C++17에서부터 지원
	Stack intStack4 = 0;					//C++17에서부터 Stack<int>가 연역됨
	Stack stringStack = "buttom";			//C++17에서부터 Stack<char const[7]>이 연역됨
	return 0;
}