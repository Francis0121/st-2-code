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

	// ����Լ��� �� ��� �Ѵ�. (������ ������ �ƴϴ�)
	// ����Լ��� ������ ��� �Լ� �ȿ� ��� ������ ������ų �� ����.
	//void print()  { // const {
	//	// x = 10; // error. ��� �Լ� �ȿ����� ��� ���� ������ �� ����.
	//	cout << x << ", " << y << endl;
	//}

	void print() const {
				   // x = 10; // error. ��� �Լ� �ȿ����� ��� ���� ������ �� ����.
		cout << x << ", " << y << endl;
	}
};

int main() {
	// Point p(0, 0);
	// ->
	const Point p(0, 0);
	
	// ��� ��ü�� ���� ��� �Լ��� �� �θ���.!
	// p.x = 10;		// error. p�� ����̴�.
	// p.set(10, 10);	// error. point Ŭ�������� ��� ������ ������ �� �������.
	// p.print(); //
	
	// -> ���� ȣ��ǰ� �Ϸ��� print()�� ����Լ� �̾�� �Ѵ�.
	// "��� ��ü�� ��� �Լ��� ȣ�� �����ϴ�"
	p.print(); // ����
}