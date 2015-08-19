#include <iostream>
using namespace std;

// nullptr은 nullptr_t 타입 입니다.

int main() {
	nullptr_t n = nullptr;

	int* p = nullptr; // nullptr_t => 모든 포인터 타입으로 암시적 변환 된다.
// 	int a = nullptr; // nullpr 은 int로 암시적 형변환 안됨
	bool b = nullptr;  // ok
}