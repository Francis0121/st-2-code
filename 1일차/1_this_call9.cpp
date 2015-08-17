#include <iostream>
using namespace std;


// callback 과 함수 포인터 문제
class Button {

	void(*handler)();

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
	cout << "1버튼 클릭" << endl;
}

int main() {
	Button b1, b2;
	b1.setHandler(&btn1Handler); // 버튼에 callback 함수등록!
	b1.click(); // 사용자가 버튼을 클릭하면 이 함수가 호출된다고 가정합니다.
}