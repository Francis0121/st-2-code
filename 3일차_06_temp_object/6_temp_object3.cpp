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
// �� Ÿ������ �����ϴ� �Լ��� �ӽð�ü�� ����� �ȴ�.!
Point foo() {
	//Point p2;
	cout << "foo" << endl;
	//return p2;
	// ���Ͽ뵵�θ� ��ü�� ����ٸ�.. �Ʒ� ó�� �ϴ� ���� ����.
	return Point(); // �ӽð�ü�� ����鼭 ����.
}

int main() {
	Point p1;
	cout << "AAA" << endl;
	p1 = foo();
	cout << "BBB" << endl;
}
// 1. ������. - p1
// 2. AAA
// 3. ������ - p2
// 4. foo
// 5. ���� ������ -���Ͽ� �ӽð�ü
// 6. �Ҹ��� - p2
// 7. �Ҹ��� - �ӽð�ü��
// 8. BBB
// 9. �Ҹ��� - p1