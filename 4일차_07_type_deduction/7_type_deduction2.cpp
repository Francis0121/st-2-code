// 규칙 2. ParamType이 포인터나 참조 일 때

// - expr이 레퍼런스라면 레퍼런스만 무시된다!. const는 유지된다.
// - expr 을 고려해서 타입을 결정한다.
template<typename T> void foo(T& a){}
template<typename T> void goo(const T& a) {}

int main() {
	int n = 10;
	const int c = n;
	const int& r = c;

	foo(n); // T :		a :
	foo(c); // T :		a :
	foo(r); // T :		a :
}