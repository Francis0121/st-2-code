#include <iostream>
using namespace std;

// int *p -> 100 - 상수 c 10 ReadOnly (불가능)
// 런타일 시간상수와 ,컴파일 시간 상수가 같은 키워드이기 때문에 혼란을 준다.

int main() {
	// const int c = 10; ----> 1 // 컴파일 시간 상수, 매크로 처럼 동작한다. // 모든 C 값은 10로 변경된다.

	int n  = 10; // ----> 2 // 런타임 상수, ReadOnly 상수, 실행시간에 변경이 불가능 하다는 의미.
	const int c = n;

	// int *p = &c; // 상수의 주소를 int*에 담기
				// error

	int* p = (int*)&c; // 강제로 Casting 또는 C++ const_cast<> 도 ok

	*p = 20; // 메모리 역참조로 하기 때문에 

	cout << c << endl; // ----> 1. 10 컴파일시 10으로 고정 ,  ----> 2. 20 호출 메모리에 갔다와야함.
	cout << *p << endl; // 20
}