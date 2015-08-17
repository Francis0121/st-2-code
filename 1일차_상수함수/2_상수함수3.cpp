#include <iostream>
using namespace std;

// 논리적 상수성
class Point {
	int x, y;
	char cache[32];
	bool cache_valid;

public:
	Point(int a = 0, int b = 0) : x(a), y(b), cache_valid(false){}

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