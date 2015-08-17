#include <iostream>
using namespace std;

// 모든 함수의 주소를 담을 수 있는 도구
// C, C++		: 문법적으로는 없다!
// C#			: delegate 라는 문법
// Objective-C	: Selector 라는 문법

// C++11 : fucntion<> 모든 함수의 주소를 담을 수 있다.

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
	f(); // ok .. foo()호출

	f = bind(&goo, 5);
	f(); // goo(5)B

	Dialog dlg;
	f = bind(&Dialog::Close, dlg);
	f();

	f = bind(&hoo, 1, 2);
	f();

}