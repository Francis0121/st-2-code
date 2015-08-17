// 5_lamda12
// ��� ���� ĸ��

#include <iostream>
using namespace std;

class Test {
	int base;

public:
	Test(int n) : base(n) {

	}

	void foo() {
		// ��� ������ base�� ĸ�� �Ϸ���?
		// X auto f = [base]() { cout << base << endl; };

		// ���� ĸ�Ĵ� �ƴ����� �����͸� ������ �����Ƿ� ���氡��.
		// ����1. �Ʒ� �ڵ带 ������� �� �����Ϸ��� ������ Ŭ������ ������ ������
		auto f = [this]() { base = 200; cout << base << endl; };
		f();
	}
};

int main() {
	Test t(20);
	t.foo();
}