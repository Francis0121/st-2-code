// 7 Ÿ���߷�(Type Deduction)

template<typename T> void foo(T a) {

}

int main() {
	int n = 0;
	const int c = 0;
	const int& r = c;

	// ���� T�� ���� Ÿ������ �߷еɱ�?
	foo(n); // T
	foo(c); // T
	foo(r); // T
}