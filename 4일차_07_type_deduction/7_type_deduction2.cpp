// ��Ģ 2. ParamType�� �����ͳ� ���� �� ��

// - expr�� ���۷������ ���۷����� ���õȴ�!. const�� �����ȴ�.
// - expr �� ����ؼ� Ÿ���� �����Ѵ�.
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