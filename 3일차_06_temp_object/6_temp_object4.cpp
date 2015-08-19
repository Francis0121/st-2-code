#include <iostream>
using namespace std;

struct Point {
	int x, y;
};

Point p = { 1, 1 };

// Point foo() : 값 리턴 - 임시객체 리턴, lvalue 가 될 수 없다.
Point& foo() { // 참조 리턴 - 임시객체 생성안됨. lvalue가 될 수 있다.
				// 단, 지역 변수는의 참조는 절대 안된다.
	return p;
}

int main() {
	// 임시 객체는 lvalue가 될 수 없습니다.
	// 아래 코드가 VC++에서는 에러가 없지만 g++ 에서는 컴파일에러
	foo().x = 10; // 임시객체.x = 10
	cout << p.x << endl; // 1
}