// 5_lamda12
// ��� ���� ĸ��

#include <iostream>
using namespace std;

class Test {
	int base;

public:
	Test(int n) : base(100) {

	}

	void foo() {
		// ��� ������ base�� ĸ�� �Ϸ���?
		auto f = [base]() { cout << base << endl; };
	}
};

int main() {
	Test t(20);
	t.foo();
}