#include <iostream>
#include <vector>
#include <string>

template <typename... Type>
void print(Type... args)
{
	(std::cout << ... << args);
}

template <typename C,typename... Idx>
void printElems(C const& coll, Idx... idx)
{
	print(coll[idx]...);
}

template<std::size_t... Idx,typename C>
void printIdx(C const& coll)
{
	print(coll[Idx]...);
}


std::vector<std::string> coll{ "good","time","say","bye" };

int main()
{
	printElems(coll, 2, 0, 3);
	std::cout << std::endl;
	print(coll[2], coll[0], coll[3]);
	std::cout << std::endl;
	printIdx<2, 0, 3>(coll);
}