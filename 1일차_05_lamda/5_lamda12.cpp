// 5_lamda12
// ¸â¹ö º¯¼ö Ä¸ÃÄ

#include <iostream>
using namespace std;

class Test {
	int base;

public:
	Test(int n) : base(100) {

	}

	void foo() {
		// ¸â¹ö º¯¼öÀÎ base¸¦ Ä¸ÃÄ ÇÏ·Á¸é?
		// X auto f = [base]() { cout << base << endl; };
		auto f = [this]() { cout << base << endl; };
		f();
	}
};

int main() {
	Test t(20);
	t.foo();
}