// 1_this_call

#include <iostream>

//	1.	����Լ��� ȣ�� ����
//		��ü�� �Լ��� 1��° ����(this)�� �߰��ȴ�. - this call
//		��Ȯ���� ecx �������ͷ� ����

//	2.	

using namespace std;

class Point {
	int x, y;
public:
	void set(int a, int b) { // Compile -> void set(Point* const this, int a, int b)s
		x = a;  // this->x = a;
		y = b;	// this->y = b;
	}

	static void foo(int a) { // void foo( int a );
		x = a;	// this->x = a �� �Ǿ� �ϴµ� this�� ����.
				// �׷��� static ��������� ��� ����
				// ������ �ȵȴ�.
	}
};

int main() {
	
	Point::foo(10); // static ����Լ��� ��ü���� ȣ�� ����
					// push 10
					//		���� ��ü�� ����.!!
					// call Point::foo

	Point p1, p2;
	p1.set(10, 20); // �� ������ ����.
					// set(&p1, 10, 20)���� ����˴ϴ�.
					// ~ Assemble
					// push 20
					// push 10 ��¥ ���ڴ� ��������
					// mov ecx, &p1	��ü �ּҴ� �������Ϳ�
					// call Point::set �׸� �Լ� ȣ��
}