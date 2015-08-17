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

void koo(int a, int b, int c, int d) {
	printf("%d %d %d %d\n", a, b, c, d);
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

	// _1, _2 �� ���� ������ f2()������ �Ķ���� �����̴�.
	function<void(int, int)> f2;
	f2 = bind(&koo, _2, 2, 9, _1);
	f2(6, 3); // 3 2 9 6 

}

// Placeholders _1, _2, _3; �� ��ü ���� �̴�.. �������� ���ø��̶�� �͵� ����.