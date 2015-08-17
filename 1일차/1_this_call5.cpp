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
		return data;
	}
};

int main() {
	Test *p = 0; // 메모리 할당에 실패 해서 0이 나왔다고 가정합니다.
	p->f1(); // 어떻게 될까요? 실행하지말고 생각해보세요.
}