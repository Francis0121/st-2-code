#include <iostream>
using namespace std;

// 논리적 상수성 : 외부에서 바라 볼때는 상수 함수가 되어야 하지만, 내부적으로는 멤버 변수의 값을 변경해야 하는 문제.
// 2. 변하지 않은 것과 변하는 것은 분리 되어야 한다. 상수 함수에서 변해야 하는 것이 있다면 별도의 구조체로 분리한다.

class Point {
	int x, y;
	char cache[32];
	bool cache_valid; // 상수 함수에서도 변경가능한 멤버 변수로 적용 mutable (keyword)

public:
	Point(int a = 0, int b = 0) : x(a), y(b), cache_valid(false) {}

	// 객체의 상태를 문자열로 반환하는 함수 : java, c#에 있는 개념
	char* toString()  const {
		// static char s[32];
		if (cache_valid == false) {
			sprintf_s(cache, "%d, %d", x, y);
			cache_valid = true;
		}
		return cache;
	}

};

int main() {
	Point p(1, 2);
	cout << p.toString() << endl;
	cout << p.toString() << endl;
}