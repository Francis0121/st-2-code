#include <iostream>
using namespace std;

// NULL ��ü�� �Լ� ȣ�� ����..

class Test {
	int data;

public:
	void f1() {
		cout << "f1" << endl;
	}
	int f2() {
		cout << "f2" << endl;
		return 0;
	}
	int f3() {
		cout << "f3" << endl;
		return data;
	}
};

int main() {
	Test *p = 0; // �޸� �Ҵ翡 ���� �ؼ� 0�� ���Դٰ� �����մϴ�.
	p->f1(); // ��� �ɱ��? ������������ �����غ�����.
}