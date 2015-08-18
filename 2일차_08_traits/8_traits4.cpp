#include <iostream>
using namespace std;

template<typename T> struct IsPointer {
	enum { value = false };
};
template<typename T> struct IsPointer<T*> {
	enum { value = true };
};

// 포인터인 경우를 처리하는 함수
template<typename T> void printv_imp(T a, Yes) {
	cout << a << " " << *a << endl;
}

// 포인터가 아닌 경우
template<typename T> void printv_imp(T a, No) {
	cout << a << endl;
}

template<typename T> void printv(T a) {
	if (IsPointer<T>::value)
		cout << a << ", " << *a << endl;
	else
		cout << a << endl;
}

int main() {
	int n = 3;
	printv(n); 
}