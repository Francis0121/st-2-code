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
void foo(Point p){}

int main() {
	Point p;
	foo(p);
}