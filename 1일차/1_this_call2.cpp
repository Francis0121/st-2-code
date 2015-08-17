#include <iostream>
using namespace std;

//	1.	일반 함수 포인터에 멤버함수의 주소를 담을 수 없다.
//		this 때문에 !!

//	2.	일반 함수 포인터에 static 멤버 함수의 주소를 담을 수 있다.

class Dialog {
public :
	void Close() {
		cout << "Dialog Close" << endl;
	}
};

void foo(){
	cout << "foo" << endl;
}

int main() {
	void(*f1)() = &foo; // ok!! 함수포인터입니다.
	// void(*f2)() = &Dialog::Close;// 될까요? 

	// 멤버 함수 포인터를 만드는 법
	void(Dialog::*f3)() = &Dialog::Close; // ok .. 외워두세요.
	f3();
}