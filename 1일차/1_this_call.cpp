// 1_this_call

#include <iostream>

//	1.	멤버함수의 호출 원리
//		객체가 함수의 1번째 인자(this)로 추가된다. - this call
//		정확히는 ecx 레지스터로 전달

//	2.	

using namespace std;

class Point {
	int x, y;
public:
	void set(int a, int b) { // Compile -> void set(Point* const this, int a, int b)s
		x = a;  // this->x = a;
		y = b;	// this->y = b;
	}

	static void foo(int a) { // void foo( int a );
		x = a;	// this->x = a 가 되야 하는데 this가 없다.
				// 그래서 static 멤버에서는 멤버 변수
				// 접근이 안된다.
	}
};

int main() {
	
	Point::foo(10); // static 멤버함수는 객체없이 호출 가능
					// push 10
					//		보낼 객체가 없다.!!
					// call Point::foo

	Point p1, p2;
	p1.set(10, 20); // 이 순간의 원리.
					// set(&p1, 10, 20)으로 변경됩니다.
					// ~ Assemble
					// push 20
					// push 10 진짜 인자는 스택으로
					// mov ecx, &p1	객체 주소는 레지스터에
					// call Point::set 그릭 함수 호출
}