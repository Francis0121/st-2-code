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

// 100 Base::foo

// 200 Dervied::foo

int main() {


	void(Base::*f)() = &Base::foo; // 잘 생각해보세요
	
	// Base* p = new Base;
	// (p->*f)(); // ? -> Base foo

	cout << f << endl; // 가상함수의 주소는 가상함수 테이블의 인덱스가 들어온다.

	Base* p = new Derived;
	(p->*f)(); // ? -> Dervied foo

}