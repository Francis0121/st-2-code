#include <iostream>
using namespace std;

int main() {
	int n = 10;

	const int* p1 = &n; // p1은 const아님. p1을 따라가면 const
	int* const p2 = &n; // p2는 constt. p2를 따라가면 const 아님.

	// pl을 가르키는 참조 r1을 만들어보세요
	// p2를 가르키는 참조 r2를 만들어보세요.

	const int*& r1 = p1; // 상수를 가르키는 것에 포인터의 참조
	int* const& r2 = p2; // 상수 포인터(포인터 자체가 상수)의 참조
}