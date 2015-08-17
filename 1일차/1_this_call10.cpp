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

#include <functional>

int main() {
	function<void()> f = &foo;
	f(); // ok .. foo()ȣ��

	//f = &goo;
	//f();

	//f = &hoo;
	//f();

	//f = &Dialog::Close();
	//f();
}