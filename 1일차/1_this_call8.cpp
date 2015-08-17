#include <iostream>
using namespace std;

class Base {
public:
	virtual void foo() {
		cout << "Base foo" << endl;
	}
};

class Derived : public Base {
public :
	virtual void foo() {
		cout << "Dervived foo" << endl;
	}
};

int main() {
	void(Base::*f)() = &Base::foo; // 잘 생각해보세요
	
	Base* p = new Base;
	(p->*f)();// ?
}