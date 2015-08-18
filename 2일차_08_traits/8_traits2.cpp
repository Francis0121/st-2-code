#include <iostream>
using namespace std;

// Traits 기술 : T의 다양한 속성(특징)을 컴파일 시간에 알아내는 기술

template<typename T> struct IsPointer {
	enum { value = false };
};

template<typename T> struct IsPointer<T*>{
	enum { value = true };
};

template<typename T> void foo(T a) {
	if (IsPointer<T>::value)
		cout << "포인터" << endl;
	else
		cout << "포인터 아님" << endl;
}

int main() {
	int n = 0;
	foo(n);
	foo(&n);
}