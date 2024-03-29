template <typename T>
T max(T a, T b)
{
	return b < a ? a : b;
}

/*
	일반적으로 템플릿이 어떠한 형식이라도 다를 수 있는 하나의 실체로 컴파일되지는 않는다.
	대신 템플릿이 사용될 때마다 템플릿에서부터 각 형식에 맞는 실체를 만든다.


	템플릿 파라미터를 실제 형식으로 바꾸는 작업은 인스턴스화(instantiation)라고 한다..
	이를 통해 템플릿의 인스턴스(instance)가 생성된다.
*/