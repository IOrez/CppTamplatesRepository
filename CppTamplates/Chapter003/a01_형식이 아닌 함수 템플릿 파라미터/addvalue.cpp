template <int Val,typename T>
T addValue(T x)
{
	return x + val;
}

template <auto Val,typename T = decltype(Val)>
T foo()
{

}

template <typename T, T val = T{}>
T bar()
{

}