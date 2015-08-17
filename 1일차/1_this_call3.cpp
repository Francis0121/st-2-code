// this_call 관리의 어려움
#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

// this 관리의 어려움!
DWORD __stdcall foo(void *p) {
	cout << "foo" << endl;
	return 0;
}

int main() {
	CreateThread(0, 0, foo, "A", 0, 0); // 스레드를 만드는 함수
										// 리눅스 pthread_create();
	_getch();
}