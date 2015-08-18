#include <iostream>
using namespace std;

template<typename T> struct IsPointer {
	enum { value = false };
};
template<typename T> struct IsPointer<T*> {
	enum { value = true };
};

// 컴파일러 동작 방식
// 1. T를 결정해서 함수 생성
// 2. 생성된 함수 컴파일 - 문법 오류 확인
// 3. 최적화 해서 실행되지 않는 코드 제거.
template<typename T> void printv(T a) {
	if (IsPointer<T>::value)
		cout << a << ", " << *a << endl;
	else
		cout << a << endl;
}

int main() {
	int n = 3;
	printv(n);  // 1. problem 
	printv(&n); // 2. ok
}