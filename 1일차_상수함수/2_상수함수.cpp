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

	// ����Լ��� ������ ��� �Լ� �ȿ� ��� ������ ������ų �� ����.
	void print() const {
		// x = 10; // error. ��� �Լ� �ȿ����� ��� ���� ������ �� ����.
		cout << x << ", " << y << endl;
	}
};

int main() {
	Point p(0, 0);
}