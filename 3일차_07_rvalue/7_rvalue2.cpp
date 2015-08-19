// 7_rvalue2

struct Point {
	int x, y;
};

Point p;
Point foo() { return p; }

int main() {
	int n1 = 10;
	int& r1 = n1; //
	int& r2 = 10; //

	Point p2;
	Point& r3 = p2;
	Point& r4 = foo();
}