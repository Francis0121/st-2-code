// ������ ���2

// C++11�� using�� �����ڵ� ��밡���ϰ� �߽��ϴ�.

class Base {
	int data;
public:
	Base() : data(0){}
	Base(int a) : data(a){}
};

class Derived : public Base{
public:
	using Base::Base;
	Derived(){}
};

int main() {
	Derived d1;
	Derived d2(1);
}