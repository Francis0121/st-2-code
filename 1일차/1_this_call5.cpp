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
		return data; // compile -> this->data;
	}

	// �Ʒ��ڵ带 ����� ������?
	// NULL ��ü�� ���ؼ� �Լ��� ȣ���ص� ���� �ʰ� �ϱ� ���ؼ�
	int call_f3() {
		return this ? f3() : 0;
	}
};

int main() {
	Test *p = 0; // �޸� �Ҵ翡 ���� �ؼ� 0�� ���Դٰ� �����մϴ�.
	p->f1(); // ��� �ɱ��? ������������ �����غ�����.
			// f1(p), f1(0);
	p->f2(); // ? ok
			// f2(p), f2(0);
	p->f3(); // ? "f3"���� ��� data�� ��� ������ this ���� ���� �ʱ� ������ ���α׷��� �״´�
			// f3(p), f3(0); 
	p->call_f3(); // �ּ����� �� ���� �ڵ�
				// this �� NULL �� ��쿡 f3()�Լ��� ������ ���ϵ��� �ϰ� 0�� ���� �ϵ��� �Ѵ�.
}