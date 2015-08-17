//6_new04
#include <iostream>
using namespace std;

// �� �����ڸ� ��������� ȣ���ؾ� �ϴ°�?
// 1. ���ϴ�.
class Point {
	int x, y;
public :
	Point(int a, int b){}
};

int main() {
	// 1. ���� point �Ѱ��� ����� ������.
	Point* p1 = new Point(1, 2);
	// 2. ���� Point 10���� ����� ������.
	// Point* p2 = new Point[10]; Default �����ڰ� ��� �ش� �������� �Ҽ� ����.

	// �ذ�å : �޸� �Ҵ�� ������ ȣ���� �и��ϸ� ���� ����.
	Point *p3 = static_cast<Point *>(operator new(sizeof(Point) * 10));
	// �Ҵ�� �޸��� �����ڸ� ȣ���ؼ� ��ü�� �ʱ���ȭ �Ѵ�.
	for (int i = 0; i < 10; i++) {
		new ( &p3[i] ) Point(0, 0);
	}

	// �� ��� �Ҹ��� ȣ�� �� �޸� ������ �Ʒ� ó�� �ؾ��Ѵ�.
	for (int i = 9; i >= 0; i--) {
		p3[i].~Point(); // �Ҹ��� ����� ȣ��
	}
	operator delete(p3);
}