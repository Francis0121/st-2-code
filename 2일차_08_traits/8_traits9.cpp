#include <iostream>
#include <type_traits>
using namespace std;


// traits 종류
// 1. T의 속성 질의

template<typename T> void foo(const T& a) {
	if (is_array<T>::value)
		cout << "배열. 크기는" << extent<T, 1>::value << endl;
}

// 2. T타입의 변형
template<typename T> void goo(const T& a) {
	// typename remove_pointer<T>::type n;
	typename add_pointer<T>::type n;
	cout << typeid(n).name() << endl;
}

int main() {
	int x[10][20];
	foo(x);
	
	int n; 
	goo(&n);
}

// 숙제 2.
// if 아래 2개 traits를 만들어 보세요

template<typename T> void foo(const T&a) {
	if (has_virtual_fucntion<T>::valeu)
		cout << "가상함수가 있습니다." << endl;
}

template<typename T> void goo(const T&a) {
	typename my_revmove_pointer<T>::type n;
}