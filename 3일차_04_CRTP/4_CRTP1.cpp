// 4_CRTP
#include <iostream>
using namespace std;

class Window {
public:
	void msgLoop() { // msgLoop(Window* this)
		onClick(); // this->onClick()
	}

	// void onClick() { 
	// virtual	void onClick() { ~ 가상 함수 overhead가 크다.
	void onClick(){
		cout << "Window onclick" << endl; // 1 
	}
};

class MyWindow : public Window {
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