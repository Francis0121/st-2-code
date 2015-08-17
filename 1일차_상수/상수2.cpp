#include <iostream>

// C89 : 배열의 크기는 컴파일 시간 상수만 된다. (런타임 상수 X)
// C99 : 배열의 크기는 변수도 가능하닥. gcc 지원 VC++ 지원 안함s.

int main() {
	int x1[3]; // ok

	int s2 = 3;
	// int x2[s2]; // gcc ok .. vc : error

	const int s3 = 3;
	int x3[s3]; // ok

	const int s4[] = { 1, 2, 3 };
	// int x4[s4[1]]; // ? int x4[ *(s4+1) ] 결국 배열(s4)는 포인터 임으로. 메모리를 참조하기 때문에 실행해봐야 안다. 따라서 불가능하다.

}

void foo(const int s) {
	// int x[s]; // 허용되지 않는다. error.
}