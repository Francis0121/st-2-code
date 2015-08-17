#include <iostream>
#include <functional>
using namespace std;

int main() {
	// 람다는 3가지 형태 변수에 담을 수 있습니다.

	// auto
	auto f1 = [](int a, int b) {return a + b; };
	// 함수 객체가 결정 됨으로 inline 치환 될 수 있다.
	
	// 함수 포인터
	int(*f2)(int,int) = [](int a, int b) {return a + b; };
	// inline 치환될 수 없다. 함수포인터로 다 담을 수 있다.

	// C++11 fuction 
	function<int(int, int)> f3 = [](int a, int b) {return a + b; };
	// inline 치환될 수 없다. binde로 다 담을 수 있다.

	f1(1, 2);
	f2(1, 2);
	f3(1, 2); 

	// 람다와 함수 인자
	foo([](int a, int b) { return a + b; });
	// foo1( [] (int a, int b) { return a + b; } );
	// foo2([](int a, int b) { return a + b; });
}

// 람다 인자를 받는 방법

// ★ auto는 절대 함수 parameter가 될 수 없다.
// void foo(auto f1){} // foo(1)	=> int type
					// fof(3.4)	=> double

// 아래 2개는 가능하지만 인라인 치환 되지 않는다.
// void foo1(int(*f2)(int, int)) {} 
// void foo2(function<int(int, int)> f3) {}

// 인라인 치환 가능하게 람다를 받는 유일한 방법은 -template
template<typename T> void foo(T f) {
	f(1, 2);
}