// this_call 관리의 어려움
#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

// C의 슬헤드 개념을 C++로 캡슐화 해 봅시다.
// 아래 클래스를 라이브러리 내부 클래스 라고 생각합시다.

class Thread {
public : 
	void Create() {

	}
	virtual void threadMain() {

	}
};


// 아래 클래스가 라이브러리 사용자 클래스 입니다.
class MyThread : public Thread {
public:
	virtual void threadMain() {
		cout << "MyThread" << endl;
	}
};

int main() {
	MyThread t;
	t.Create();	// 이 순간 스레드가 생성되어서 threadMain 을 수행해야 합니다.
}