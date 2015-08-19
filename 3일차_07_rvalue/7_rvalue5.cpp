#include <iostream>
using namespace std;

// 함수 오버로딩과 참조
void foo(int&) { //1
	cout << "int&" << endl;
}

void foo(int&&) { //2
	cout << "int&&" << endl;
}

void foo(const int&) { //3
	cout << "const int&" << endl;
}

int main() {
	int n = 10;
	//foo(n); // 1 --> 1번이 없는 경우 3
	// foo(10); // 2 -- > 2번이 없는 경우 3

	int&& r = 10;
	foo(r); // 1 --> rvalue reference는 lavlue이다.

}