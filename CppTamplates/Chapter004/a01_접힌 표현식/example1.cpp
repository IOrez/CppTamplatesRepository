template <typename... T>
auto foldSum(T... s)
{
	return (... + s);	//((s1+s2)+s3);
}