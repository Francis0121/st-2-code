class Base {
public:
	virtual void foo(int) {}
	virtual void goo() const {}
	virtual void hoo() {}
};

class Derived : public Base {
public:
	// 가상 함수를 재정의 하고 싶었습니다. 그런데
	// 다음중 개발자의 실수는?
	void foo(int) override {}				// 1. ok virtaul 생략 가능
	virtual void foo(double) override {}	// 2. error  parameter 타입 틀림
	virtual void goo() override {}		// 3. error 상수 함수가 아니다.
	virtual void gooo() override {}		// 4. error 함수이름이 틀렸다.
	void hoo() override {}				// 5. error 가상함수가 아니다.
};

int main() {

}