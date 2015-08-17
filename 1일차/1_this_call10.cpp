#include <iostream>
using namespace std;

// ��� �Լ��� �ּҸ� ���� �� �ִ� ����
// C, C++		: ���������δ� ����!
// C#			: delegate ��� ����
// Objective-C	: Selector ��� ����

// C++11 : fucntion<> ��� �Լ��� �ּҸ� ���� �� �ִ�.

class Dialog {

public:
	void Close() {
		cout << "Dialog Close" << endl;
	}

};

void foo() {
	cout << "foo" << endl;
}

void goo(int a) {
	cout << "goo  : " << a << endl;
}

void hoo(int a, int b) {
	cout << "hoo : " << a << b << endl;
}

// fuction<ReturnType(Parameter)>
#include <functional>

int main() {
	function<void()> f = &foo;
	f(); // ok .. foo()ȣ��

	f = bind(&goo, 5);
	f(); // goo(5)B

	Dialog dlg;
	f = bind(&Dialog::Close, dlg);
	f();

	f = bind(&hoo, 1, 2);
	f();

}