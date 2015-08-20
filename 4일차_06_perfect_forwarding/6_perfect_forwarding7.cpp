// 6_완벽한 전달자 - Perfect Forwarding
#include <iostream>
using namespace std;

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
