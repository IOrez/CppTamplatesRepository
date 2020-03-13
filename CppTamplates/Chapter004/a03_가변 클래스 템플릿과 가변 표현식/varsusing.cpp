#include <string>
#include <unordered_set>

class Customer
{
private:
	std::string name;
public:
	Customer(std::string const& n):name(n){}
	std::string getName()const { return name; }
};

struct CustomerEq 
{
	bool operator()(Customer const& c1, Customer const& c2)const {
		return c1.getName() == c2.getName();
	}
};

struct CustomerHash 
{
	std::size_t operator()(Customer const& c)const {
		return std::hash<std::string>()(c.getName());
	}
};

//가본 기본 클래스를 위해 operator()를 결합시키는 클래스 정의
template <typename... Bases>
struct Overloader :Bases...
{
	using Bases::operator()...;				//C++17에서 부터 지원
};

int main()
{
	//Customer를 위한 해시 연산과 동등성 연산을 결합해 하나의 형식 만듦
	using CustomerOP = Overloader<CustomerHash, CustomerEq>;

	std::unordered_set<Customer, CustomerHash, CustomerEq> coll1;
	std::unordered_set<Customer, CustomerOP, CustomerOP> coll2;


}