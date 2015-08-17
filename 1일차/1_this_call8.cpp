#include <iostream>
using namespace std;

class Base {
public:
	// 순수 가상 함수로 구현 되도 무관하다.
	virtual void foo() = 0; //  { cout << "Base foo" << endl; }
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

	// 가상함수의 주소를 꺼내면 진짜 주소가 아닌 가상 함수 table의 인덱스 즉, 가상함수의 순서가 나오게 된다.
	void(Base::*f)() = &Base::foo; // 잘 생각해보세요
	
	// Base* p = new Base;
	// (p->*f)(); // ? -> Base foo

	cout << f << endl; // 가상함수의 주소는 가상함수 테이블의 인덱스가 들어온다.

	Base* p = new Derived;
	(p->*f)(); // ? -> Dervied foo

}