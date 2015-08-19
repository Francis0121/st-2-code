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

int main() {
	cout << "AAA" << endl;
	Point p;
	cout << "BBB" << endl;
}