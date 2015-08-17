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
	cout << "hoo : " << a << ", " << b << endl;
}

// fuction<ReturnType(Parameter)>
#include <functional>
using namespace std::placeholders; // _1, _2 .. ����ϱ� ���� ����ϴ� ��.
int main() {
	function<void(int)> f = &goo;
	f(5); // goo(5)

	// Parameter ù��° ���� �ι�° ���� �� �� ����.
	// bind �� ����ϴ� ��� ���� ���� ��ŭ �ݵ�� �־��־�� �Ѵ�. 
	f = bind(&hoo, _1, 3); // hoo(5, 3);
	f(5); 
}