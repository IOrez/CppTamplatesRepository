#include <iostream>
#include <cassert>
#include <vector>

template <typename T>
class Stack
{
public:
	void push(T const& elem)
	{
		elems.push_back(elem);
	}

	T pop()
	{
		assert(!elems.empty());
		T elem = elems.back();
		elems.pop_back();
		return elem;
	}

	T const& top()
	{
		assert(!elems.empty());
		return elems.back();
	}

	void printOn(std::ostream& strm)const
	{
		for (auto&& elem : elems)
			strm << elem << '\n';
	}
	template <typename U>
	friend std::ostream& operator<<(std::ostream& strm, Stack<U> const& s)
	{
		s.printOn(strm);
		return strm;
	}
	friend std::ostream& operator<< <T>(std::ostream&, Stack<T> const&);
	
private:
	std::vector elems;
};

template <typename T>
class Stack;
template <typename U>
std::ostream& operator << (std::ostream, Stack<U>const& s);

