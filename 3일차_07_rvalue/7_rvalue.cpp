// 7_rvalue

// lvalue : = �� ���ʿ� ��� �� �� �ִ�.
//			����
// rvalue : = �� �����ʿ��� �� �� �ִ�.
//			���
int x = 10;
int foo() { return x; }
int& goo() { return x; }

int main() {
	int n1 = 10;
	int n2 = 20;

	n1 = 10;
	10 = n1;
	n2 = n1;

	foo() = 20;
	goo() = 20;
}