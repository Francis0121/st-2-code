#include <iostream>
using namespace std;

// 논리적 상수성
class Point {
	int x, y;
public:
	Point(int a = 0, int b = 0) : x(a), y(b) {}

	// 객체의 상태를 문자열로 반환하는 함수 : java, c#에 있는 개념
	char* toString() {
		static char s[32];
		sprintf(s, "%d, %d", x, y);
		return s;
	}

};

int main() {
	Point p(1, 2);
	cout << p.toString << endl;
	cout << p.toString << endl;
}