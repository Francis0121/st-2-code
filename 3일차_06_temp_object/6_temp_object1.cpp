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

int main() {
	cout << "AAA" << endl;
	Point p;
	cout << "BBB" << endl;
}