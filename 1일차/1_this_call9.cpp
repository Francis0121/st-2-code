#include <iostream>
using namespace std;


// callback 과 함수 포인터 문제
class Button {

	// 일반 함수포인터만 담을 수 있다.
	void(*handler)();

	// 객체 함수 포인터를 담을 수 있다.
	// void(Dialog::*handler)();
	// Dialog* pDlg;

	// ~ C, C++에는 일반 함수와 객체 함수 포인터를 동시에 담을 수 없다.

	/*void(Dialog::*handler)();
	Dialog* pDlg;*/

public :

	void setHandler(void(*f)()) {
		handler = f;
	}

	void click() {
		// 버튼이 눌렸다는 사실을 외부에 전달합니다. 
		// 흔히 "객체가 외부에 이벤트를 발생한다." 라고 표현.

		handler();
	}
};

void btn1Handler() {
	cout << "버튼 1 클릭" << endl;
}

int main() {
	Button b1, b2;
	b1.setHandler(&btn1Handler); // 버튼에 callback 함수등록!
	b1.click(); // 사용자가 버튼을 클릭하면 이 함수가 호출된다고 가정합니다.
}