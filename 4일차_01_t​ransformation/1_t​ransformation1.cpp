// 1_º¯È¯
#include <iostream>
using namespace std;

class Point {
	int x, y;
public :
	Point() : x(0), y(0) {

	}
	Point(int a, int b) : x(a), y(b){
	
	}
};

int main() {
	double d = 3.4;
	int n = d;

	Point p(1, 2);
	n = p;
}