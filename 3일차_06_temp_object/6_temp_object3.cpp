// �ӽð�ü
#include <iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point() {
		cout << "������" << endl;
	}

	~Point() {
		cout << "�Ҹ���" << endl;
	}

	Point(const Point&) {
		cout << "���������" << endl;
	}

};

// �Լ� ���ڿ� �ӽð�ü
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