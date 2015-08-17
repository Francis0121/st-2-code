#include <iostream>
using namespace std;

class Base {
public:
	// 순수 가상 함수로 구현 되도 무관하다.
	virtual void goo() {
		cout << "Base goo" << endl;
	}
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

	// 가상함수의 주소를 꺼내면 진짜 주소가 아닌 가상 함수 table의 인덱스 즉, 가상함수의 순서가 나오게 된다.
	// g++, xcode : 0,1,3 등의 숫자가 나오게 된다.
	// vc++ : 주소비슷하게 나오는데 그 주소를 따라가면 index가 있습니다. VC만의 특징
	void(Base::*f)() = &Base::goo; // 잘 생각해보세요
	
	// Base* p = new Base;
	// (p->*f)(); // ? -> Base foo

	cout << f << endl; // 가상함수의 주소는 가상함수 테이블의 인덱스가 들어온다.
	printf("%d\n", f);

	Base* p = new Derived;
	(p->*f)(); // ? -> Dervied foo

}