#include <iostream>
using namespace std;

class Test; // Ŭ���� ���漱�� - ������ ������ ���̵� ������ ������ ����� �� �ִ�.

Test* p; // incomplete objecct(�ҿ����� ��ü)
		// ���漱�� �ִ� Ÿ���� ������ delete �ϸ� �Ҹ��ڸ� ȣ������ ���Ѵ�.

void foo(Test* pt) {
	delete pt;
}

class Test {
public:
	Test() {
		cout << "������" << endl;
	}
	~Test() {
		cout << "�Ҹ���" << endl;
	}
};

int main() {
	Test* p = new Test;
	foo(p);
}