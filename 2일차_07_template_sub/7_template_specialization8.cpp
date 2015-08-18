#include <iostream>
using namespace std;

// bool 기반 type selection 기술
template<bool, typename T, typename U>
struct IfThenElse {
	typedef T ResultT;
};

template<typename T, typename U>
struct IfThenElse<false, T, U> {
	typedef U ResultT;
};


// ---------------
// primary Template을 보면 템플릿 인자는 3개이다.
// IfThenElse<bool상수, 타입, 타입>

/* 옛날기술
template <typename T, typename U>
typename IfThenElse< (sizeof(T)>sizeof(U)), T, U > ::ResultT
Mul(T a, U b) {
	return a * b;
}
*/ 

// C++11/14 기술
// 람다와 유사한 trialing return 기술
template <typename T, typename U>
auto Mul(T a, U b) -> decltype(a * b) {
	return a * b;
}

int main() {
	cout << Mul(3.3, 2.2) << endl;
}