#include <iostream>
using namespace std;

int negative(int n) {
	return -n;
}

void goo(int a, int b, int c) {
	cout << a << ", " << b << ", " << c << endl;
}

template<typename ... Types> 
void foo(Types ... args) {
	// args 를 goo로 보내 보세요.
	goo(args...); // goo(1,2,3);
//	goo(negative(args...)); // error. negative는 인자가 한개이다.
	goo(negative(args)...);
}

int main() {
	foo(1, 2, 3);
}