#include <iostream>
using namespace std;

class Base {
public:
	// ���� ���� �Լ��� ���� �ǵ� �����ϴ�.
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

	// �����Լ��� �ּҸ� ������ ��¥ �ּҰ� �ƴ� ���� �Լ� table�� �ε��� ��, �����Լ��� ������ ������ �ȴ�.
	void(Base::*f)() = &Base::foo; // �� �����غ�����
	
	// Base* p = new Base;
	// (p->*f)(); // ? -> Base foo

	cout << f << endl; // �����Լ��� �ּҴ� �����Լ� ���̺��� �ε����� ���´�.

	Base* p = new Derived;
	(p->*f)(); // ? -> Dervied foo

}