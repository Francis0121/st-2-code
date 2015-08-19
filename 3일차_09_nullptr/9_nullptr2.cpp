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

// C/C++ 간의 차이점 때문에 NULL 은 아래처럼 만들어져 있습니다.
#ifdef __cplusplus
	#define NULL 0
#else
	#define NULL (void*)0
#endif

int main() {
}