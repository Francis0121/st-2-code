#include <iostream>
using namespace std;

class Base {
public :
	void foo(int a) {
		cout << "int" << endl;
	}

	void foo(int a, int b) {
		cout << "int, int" << endl;
	}
};

class Derived : public Base{
public:
	void foo(double) {
		cout << "double" << endl;
	}
};

int main() {
	Derived d;
	// 실행하지 말고 다음중 에러를 모두 고르세요
	d.foo(1);    //1. double
// 	d.foo(1, 2); //2. error
	d.foo(3.4);  //3. double
}