#include <iostream>
using namespace std;

class Point {
public :
	int x, y;

	Point(int a = 0, int b = 0);

	void set(int a, int b) {
		x = a;
		y = b;
	}

	// 상수함수는 꼭 써야 한다. (안정성 때문이 아니다)
	// 상수함수로 구현할 경우 함수 안에 멤버 변수를 조정시킬 수 없다.
	//void print()  { // const {
	//	// x = 10; // error. 상수 함수 안에서는 멤버 값을 변경할 수 없다.
	//	cout << x << ", " << y << endl;
	//}

	void print() const {
				   // x = 10; // error. 상수 함수 안에서는 멤버 값을 변경할 수 없다.
		cout << x << ", " << y << endl;
	}
};

int main() {
	// Point p(0, 0);
	// ->
	const Point p(0, 0);
	
	// 상수 객체는 절대 멤버 함수는 못 부른다.!
	// p.x = 10;		// error. p는 상수이다.
	// p.set(10, 10);	// error. point 클래스내에 멤버 변수를 변경할 수 없어야함.
	// p.print(); //
	
	// -> 따라서 호출되게 하려면 print()는 상수함수 이어야 한다.
	// "상수 객체는 상수 함수만 호출 가능하다"
	p.print(); // 가능
}