// 임시객체
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

	Point(const Point&) {
		cout << "복사생성자" << endl;
	}

};

// 함수 인자와 임시객체
Point foo() {
	Point p2;
	return p2;
}

int main() {
	Point p1;
	cout << "AAA" << endl;
	p1 = foo();
	cout << "BBB" << endl;
}