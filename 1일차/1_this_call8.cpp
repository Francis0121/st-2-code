#include <iostream>
using namespace std;

class Base {
public:
	// ���� ���� �Լ��� ���� �ǵ� �����ϴ�.
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

	// �����Լ��� �ּҸ� ������ ��¥ �ּҰ� �ƴ� ���� �Լ� table�� �ε��� ��, �����Լ��� ������ ������ �ȴ�.
	// g++, xcode : 0,1,3 ���� ���ڰ� ������ �ȴ�.
	// vc++ : �ּҺ���ϰ� �����µ� �� �ּҸ� ���󰡸� index�� �ֽ��ϴ�. VC���� Ư¡
	void(Base::*f)() = &Base::goo; // �� �����غ�����
	
	// Base* p = new Base;
	// (p->*f)(); // ? -> Base foo

	cout << f << endl; // �����Լ��� �ּҴ� �����Լ� ���̺��� �ε����� ���´�.
	printf("%d\n", f);

	Base* p = new Derived;
	(p->*f)(); // ? -> Dervied foo

}