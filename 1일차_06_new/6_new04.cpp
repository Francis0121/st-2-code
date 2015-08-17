//6_new04
#include <iostream>
using namespace std;

// 왜 생성자를 명시적으로 호출해야 하는가?
// 1. 편리하다.
class Point {
	int x, y;
public :
	Point(int a, int b){}
};

int main() {
	// 1. 힙에 point 한개를 만들어 보세요.
	Point* p1 = new Point(1, 2);
	// 2. 힙에 Point 10개를 만들어 보세요.
	// Point* p2 = new Point[10]; Default 생성자가 없어서 해당 구문으로 할수 없다.

	// 해결책 : 메모리 할당과 생성자 호출을 분리하면 편리해 진다.
	Point *p3 = static_cast<Point *>(operator new(sizeof(Point) * 10));
	// 할당된 메모리의 생성자를 호출해서 객체를 초기하화 한다.
	for (int i = 0; i < 10; i++) {
		new ( &p3[i] ) Point(0, 0);
	}

	// 이 경우 소멸자 호출 및 메모리 해지도 아래 처럼 해야한다.
	for (int i = 9; i >= 0; i--) {
		p3[i].~Point(); // 소멸자 명시적 호출
	}
	operator delete(p3);

	// Point를 스택에 10개 만들어 보세요.
	// Point p4[10]; // Default 생성자가 없어서 해당 구문으로 생성할수 없다.

	char buf[sizeof(Point) * 10];
	
	// 안됨 Point* p4 = static_cast<Point*>(&buf);
	Point* p4 = reinterpret_cast<Point*>(&buf);
	 
	// static_cast 차이점이존재 reinterpret_cast

	// p4에 대해 생성자를 명시적으로 호출하고 사용하면 된다.

	// 사용후 소멸
}