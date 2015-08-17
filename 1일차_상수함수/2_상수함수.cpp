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

	// 상수함수로 구현할 경우 함수 안에 멤버 변수를 조정시킬 수 없다.
	void print() const {
		// x = 10; // error. 상수 함수 안에서는 멤버 값을 변경할 수 없다.
		cout << x << ", " << y << endl;
	}
};

int main() {
	Point p(0, 0);
}