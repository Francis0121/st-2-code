// 7 타입추론(Type Deduction)

template<typename T> void foo(T a) {

}

int main() {
	int n = 0;
	const int c = 0;
	const int& r = c;

	// 각각 T는 무슨 타입으로 추론될까?
	foo(n); // T
	foo(c); // T
	foo(r); // T
}