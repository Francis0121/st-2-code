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
};

int main() {
	Point* p = new Point;
	delete p;
}