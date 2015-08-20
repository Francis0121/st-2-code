// 6 완벽한전달자4
#include <iostream>
using namespace std;

template<typename T>
class my_reference_wrapper {
	T* obj; 
public:
	my_reference_wrapper(T& r) : obj(&r) {}
	operator T&() { return *obj; }
};

void foo(int a) { cout << "foo" << endl; }
void goo(int& a) { cout << "goo" << endl; a = 20; }

template<typename F, typename T>
void HowLong(F f, const T& a) {
	f(a);
}

int main() {
	int n = 0;
	HowLong(foo, 0);
	HowLong(goo, n);

	cout << n << endl;
}

