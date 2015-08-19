// 9_nullptr - C++11의 새로운 개념

#include <iostream>
using namespace std;

void foo(int n) {
	cout << "int" << endl; // 1
}

void foo(void* p) {
	cout << "void*" << endl; //2
}

void goo(char* p) {
	cout << "char*" << endl; //3
}

int main() {
	int* p = nullptr; // 포인터 0을 나타내는 상수
	char* p2 = nullptr;

	//int n = nullptr; // error .. 포인터 0이지 정수 0이 아니다.

	foo(nullptr);
	goo(nullptr);
}