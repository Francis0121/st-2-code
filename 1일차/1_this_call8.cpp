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
	void(Base::*f)() = &Base::foo; // �� �����غ�����
	
	Base* p = new Base;
	(p->*f)();// ?
}