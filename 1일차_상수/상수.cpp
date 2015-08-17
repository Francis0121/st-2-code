#include <iostream>
using namespace std;

// int *p -> 100 - 상수 c 10 ReadOnly (불가능)

int main() {
	// const int c = 10; ----> 1 // 컴파일 시간 상수, 매크로 처럼 동작한다.

	int n  = 10; // ----> 2
	const int c = n;

	// int *p = &c; // 상수의 주소를 int*에 담기
				// error

	int* p = (int*)&c; // 강제로 Casting 또는 C++ const_cast<> 도 ok

	*p = 20;

	cout << c << endl; // ----> 1. 10 ,  ----> 2. 20 호출
	cout << *p << endl; // 20
}