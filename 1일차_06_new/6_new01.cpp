#include <iostream>
using namespace std;

class Point {
	int x, y;

public:
	Point() {
		cout << "持失切" << endl;
	}

	~Point() {
		cout << "社瑚切" << endl;
	}
};

int main() {
	Point* p = new Point;
	delete p;
}