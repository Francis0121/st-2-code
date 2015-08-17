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
		// CreateThread 인 함수는 반드시 parameter 가 하나여야한다.
		// this 를 넘겨주지 않는 경우
		// CreateThread(0, 0, _threadMain, 0, 0, 0); // !! Error
		// -> this 를 파라미터로 넘겨준다.
		CreateThread(0, 0, _threadMain, this, 0, 0); // !! Error
	}

	// 스레드 함수
	// 핵심 1. C의 callback 함수는 객체 지향으로 디자인 될때 static 멤버함수가 되어야한다.
	static DWORD __stdcall _threadMain(void *p) {
		// 결국 p가 this임으로 캐스팅해서 사용합니다.
		Thread* self = static_cast<Thread*>(p);
		self->threadMain(); // 결국 threadMain(self)

		// threadMain();	// compile -> this->threadMain()
						// 즉 threadMain(this)가 되어야 한다.
		return 0;
	}

	virtual void threadMain() { // compile -> threadMain(Thread *this)

	}
};

// 빌드하면 에러가 발생합니다... 왜 에러 일까요?

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