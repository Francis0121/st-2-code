// 4_CRTP
#include <iostream>
using namespace std;

class Window {
public:
	void msgLoop() { // msgLoop(Window* this)
		onClick(); // this->onClick()
	}

	// void onClick() { 
	// virtual	void onClick() { ~ ���� �Լ� overhead�� ũ��.
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
				// 2�� ȣ���ϰ� �ʹٸ� �θ� �Լ��� virtual�� ���δ�.
}