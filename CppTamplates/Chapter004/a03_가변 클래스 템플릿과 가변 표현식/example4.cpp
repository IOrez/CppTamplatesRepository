#include <type_traits>


namespace std
{
	template<typename T,typename... U>
	class array
	{
	public:
		array(T t, U... args) {};
		array(T, U...)-> array<enable_if_t<is_same_v<T, U> &&...), T > , (1 + sizeof...(U)) > ;
	};
}

