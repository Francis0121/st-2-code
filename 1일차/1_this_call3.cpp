// this_call ������ �����
#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

// this ������ �����!
DWORD __stdcall foo(void *p) {
	cout << "foo" << endl;
	return 0;
}

int main() {
	CreateThread(0, 0, foo, "A", 0, 0); // �����带 ����� �Լ�
										// ������ pthread_create();
	_getch();
}