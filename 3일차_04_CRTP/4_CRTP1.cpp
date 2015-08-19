// 4_CRTP
#include <iostream>
using namespace std;

// CRTP : Curiously Recurring Template Pattern
//		부모가 템플릿인데.. 자식 만들때 자신의 이름을 부모에게 인자로 전달해주는 기술을 말한다.
//		미래에 만들어질 자식의 이름을 사용할 수 있다.

// CRTP를 사용해서 비 가상함수를 가상함수 처럼 동작하게 하는 예제.

template<typename T> class Window {
public:
	void msgLoop() { // msgLoop(Window* this)
		// onClick(); // this->onClick()
		(static_cast<T*>(this))->onClick();
	}

	// void onClick() { 
	// virtual	void onClick() { ~ 가상 함수 overhead가 크다.
	void onClick(){
		cout << "Window onclick" << endl; // 1 
	}
};

class MyWindow : public Window<MyWindow> {
public:
	void onClick() {
		cout << "MyWindow onclick" << endl; // 2
	}
};

int main() {
	MyWindow w;
	w.msgLoop(); // 1 
				// msgLoop(&w)
				// 2를 호출하고 싶다면 부모 함수에 virtual을 붙인다.
}