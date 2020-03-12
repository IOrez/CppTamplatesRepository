struct Node
{
	int value;
	Node* left;
	Node* right;
	Node(int i = 0) :value(i), left(nullptr), right(nullptr)
	{

	}
};

auto left = &Node::left;
auto right = &Node::right;

//접힌 표현식을 사용해 트리를 탐색한다.
template <typename T,typename... TP>
Node* traverse(T np, TP... paths)
{
	return (np ->* ...->* paths);	//np->*paths1 ->*paths2.....
}

int main()
{
	//이진트리 구조 초기화
	Node* root = new Node(0);
	root->left = new Node(1);
	root->left->right = new Node(2);

	Node* node = traverse(root, left, right);
}