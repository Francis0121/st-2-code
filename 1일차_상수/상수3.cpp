#include <iostream>

// C++ 11 : 컴파일 상수를 위한 새로운 키워드 도입

// 반드시 인자도 상수만 보낼 수 있다.
constexpr int foo(int a, int b) { // C++ 11 constexpr
//	constexpr int foo(constexpr int a, constexpr int b) { C++ 14 constexpr
	return a + b; // 컴파일러는 컴파일 시간에 상수 덧셈을 할 수 있다.
}

int main() {

	int n = 10;

	// C++98/03 스타일 : 1998년 표준화 되고 2003년 버그수정(개정된) C++
	const int c1 = 10; // ok
	const int c2 = n; // ok

	// C++11/14 : 2011년 2차 표준화 2014년 버그수정(개정판)
	constexpr int c3 = 10; // ok
	// constexpr int c4 = n; // error 컴파일 상수가 아니다.

	// 배열 크기로 함수도 사용가능
	// 단, 함수리턴값은 __ 이어야 한다.
	int x[foo(3, 4)];
}
