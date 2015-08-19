// 7_rvalue

// lvalue : = 의 양쪽에 모두 올 수 있다.
//			변수
// rvalue : = 의 오른쪽에만 올 수 있다.
//			상수
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