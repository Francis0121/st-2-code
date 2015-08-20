#include <iostream>
using namespace std;

// 규칙 3. Universal reference인 경우
// int&& : rvalue reference - rvalue만 담을수 있다.
// T&& : universal reference ( forward reference 라고도 합니다. )

// 인자로 전달되는 표현이 lvalue 이면 T&&는 lvalue reference가 되고 
// 인자로 전달되는 표현이 rvalue 이면 T&&는 rvalue reference가 된다.
template<typename T> void foo(T&& a) {

}

int main() {
	int n = 10;

	foo(n); // int&
	foo(10); // int&7

	int& r = n;
	foo(r);
}