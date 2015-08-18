#include <iostream>
using namespace std;

// C++ idioms 검색후 첫번째 링크

// 0, 1 로 함수 오버로딩이 되게 하는 기술

// 모든 int형 상수를 타입으로 만드는 시스템
// Modern C++의 저자인 Andrie Alexandr... 가 2000년도에 만든 기술

// 컴파일 시간 결정된 모든 상수는 함수 오버로딩에 활용될 수 있다.
template<int N> struct int2type {
	enum { value = N };
};
// 모든 interger를 type으로 바꿔주는 역할을한다.

//int main() {
//	foo(0);
//	foo(1); // 0,1은 같은 타입이다. foo(0), foo(1) 같은 함수 호출.
//	int2type<0> t0;
//	int2type<1> t1;
//	foo(t0);
//	foo(t1); // t0와 t1은 다른 타입이다. foo(t0), foo(t1)은 다른 함수 호출.
//}


template<typename T> struct IsPointer {
	enum { value = false };
};
template<typename T> struct IsPointer<T*> {
	enum { value = true };
};

// 포인터인 경우를 처리하는 함수
template<typename T> void printv_imp(T a, int2type<1>) {
	cout << a << " " << *a << endl;
}

// 포인터가 아닌 경우
// 파라미터 변수이름을 안적게 되면 최적화시 안쓰는 값으로 판단하여 최적화를 알아서 해준다.
template<typename T> void printv_imp(T a, int2type<0>) {
	cout << a << endl;
}

template<typename T> void printv(T a) {
	// 어떤 구조체나 클래스에 ()을 붙이면 임시객체를 생성해준다.
	printv_imp(a, int2type<IsPointer<T>::value>() );
}

int main() {
	int n = 3;
	printv(&n);
	printv(n);
}
