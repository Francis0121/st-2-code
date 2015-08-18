#include <iostream>
using namespace std;

// primary template : fals_type을 기본 클래스로 
template<typename T> struct IsArray : false_type{};

// traits를 만드는 방법 다시 정리
template<typename T> void foo(const T& a) {
	if (IsArray<T>::value) {
		cout << "배열" << endl;
	} else {
		cout << "배열 아님" << endl;
	}
}

int main() {
	int x[10];
	foo(x);
}