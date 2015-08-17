#include <iostream>
using namespace std;

// NULL 객체의 함수 호출 문제..

class Test {
	int data;

public:
	void f1() {
		cout << "f1" << endl;
	}
	int f2() {
		cout << "f2" << endl;
		return 0;
	}
	int f3() {
		cout << "f3" << endl;
		return data; // compile -> this->data;
	}
};

int main() {
	Test *p = 0; // 메모리 할당에 실패 해서 0이 나왔다고 가정합니다.
	p->f1(); // 어떻게 될까요? 실행하지말고 생각해보세요.
			// f1(p), f1(0);
	p->f2(); // ? ok
			// f2(p), f2(0);
	p->f3(); // ? "f3"까지 찍고 data의 멤버 변수가 this 콜이 되지 않기 때문에 프로그램이 죽는다
			// f3(p), f3(0); 
}