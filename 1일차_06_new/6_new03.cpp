// 6_new03
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

// �Ʒ� �Լ��� ��ƽ��ϴ�. - �� ������ ������
//void* operator new (size_t sz, Point *p){
//	return p;
//}
// -----> �ش� �Լ��� C++ ǥ���̴�.
//void* operator new (size_t sz, void *p){
//	return p;
//}


int main() {
	Point p;

	// new Point; // ���ڰ� �Ѱ��� operator new()ȣ��
	
	new(&p) Point; // ���� ���� ���� 2���� operator new() ȣ��
				// ��ü p �� ���ؼ� �����ڸ� ��������� ȣ�� 

	// p.Point(); // �������� ����� ȣ�� ? error
	p.~Point(); // �Ҹ����� ����� ȣ�� ? ok
}