// 6_new03
#include <iostream>
using namespace std;

class Point {
	int x, y;

public:
	Point() {
		cout << "생성자" << endl;
	}

	~Point() {
		cout << "소멸자" << endl;
	}
};

int main() {
	Point p;

	// p.Point(); // 생성자의 명시적 호출 ? error
	p.~Point(); // 소멸자의 명시적 호출 ? ok
}