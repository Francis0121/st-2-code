// 10 ���ø� ����

// 1. type
// 2. ������ ���(���� �ȵ�. �Ǽ� �ȵ�)
template<typename T, int N> struct stack {
	T buff[N];
};

int main() {
	stack<int, 10> s1;

	int n = 10;
	stack<int, n> s2;
}