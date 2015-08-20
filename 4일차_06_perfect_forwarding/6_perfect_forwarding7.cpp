// 6_완벽한 전달자 - Perfect Forwarding

#include <iostream>
using namespace std;

void foo(int a) { cout << "foo" << endl; }
void goo(int& a) { cout << "goo" << endl; a = 20; }

// Reference Wrapper가 없어도 된다.- C++11.. 
// C++11의 universal reference를 사용한 해결책.
// int&& : rvalue 레퍼런스입니다.
template<typename F, typename T>
void HowLong(F f, T&& a) {
	f(a);
}

int main() {
	int n = 0;
	HowLong(foo, 0);
	HowLong(goo, n);

	cout << n << endl;
}
