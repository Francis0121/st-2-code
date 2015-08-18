// 11_가변인자 템플릿
#include <iostream>
using namespace std;

template<typename ... Types> void goo(Types ... args) {
	cout << "goo" << endl;
}

void hoo(int a, double d, char c) {
	cout << "hoo" << endl;
}

void zoo(int* a, double* b, char* c) {
	cout << "zoo" << endl;
}

// Types : 여러개의 타입을 가지고 있는 타입의 집합
// args : 여러개의 값을 가지고 있는 인자 집합 - " Parameter Pack"
template<typename ... Types> void foo(Types ... args) { // ★ ... 위치 중요
	// Parameter Pack 안에 인자 갯수를 알고 싶다면
	cout << sizeof...(args) << endl;
	cout << sizeof...(Types) << endl;

	// Parameter Pack 을 다른 함수로 전달하는 방법
	goo(args...); // ★ ... 위치 중요
	hoo(args...);
	zoo(&args...); // 각각 변수에 대한 주소값으로 넘어간다.
}

int main() {
	foo(1, 3.3, 'a');
}