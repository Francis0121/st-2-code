// 생성자 상속2

// C++11은 using을 생성자도 사용가능하게 했습니다.

class Base {
	int data;
public:
	Base() : data(0){}
	Base(int a) : data(a){}
};

class Derived : public Base{
public:
	using Base::Base; // 부모 생성자도 상속해 달라
	Derived(){}
};

int main() {
	Derived d1;
	Derived d2(1);
}