#include <iostream>
using namespace std;

struct Point {
	int x, y;
};

Point p = { 1, 1 };

Point foo() {
	return p;
}

int main() {
	// �ӽ� ��ü�� lvalue�� �� �� �����ϴ�.
	// �Ʒ� �ڵ尡 VC++������ ������ ������ g++ ������ �����Ͽ���
	foo().x = 10; // �ӽð�ü.x = 10
	cout << p.x << endl; // 1
}