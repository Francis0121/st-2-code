class Base {
public:
	virtual void foo(int){}
	virtual void goo() const{}
	virtual void hoo(){}
};

class Derived : public Base {
public:
	// 가상 함수를 재정의 하고 싶었습니다. 그런데
	// 다음중 개발자의 실수는?
	void foo(int){}				// 1. ok virtaul 생략 가능
	virtual void foo(double){}	// 2. parameter 타입 틀림
	virtual void goo(){}		// 3. 상수 함수가 아니다.
	virtual void gooo(){}		// 4. 함수이름이 틀렸다.
	void hoo(){}				// 5. 가상함수가 아니다.
};

int main() {

}