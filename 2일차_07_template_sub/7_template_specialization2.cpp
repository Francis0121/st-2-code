// 7 템플릿 부분 전문화 2

#include <iostream>
using namespace std;

// template meta programming : 컴파일 시에 연산을 수행하는 것

// 컴파일 시간 재귀를 활용한다.
// 재귀의 종료를 위해서 전문화 문법이 활용된다.
// 메타 함수라고 부른다.

// template 인자로 타입이 아닌 정수를 보내도 됩니다.
template<int N> struct Factorial {
	enum {
		value = N * Factorial<N - 1>::value;
	};
};

template<> struct Factorial<1> {
	enum {
		value = 1
	};
};


int main() {
	int n = Factorial<5>::value;
			// 5 * F<4>::v
			// 5 * 4 * F<3>::v
			// 5 * 4 * 3 * F<2>::v 
			// 5 * 4 * 3 * 2 * F<1>::v
			// 5 * 4 * 3 * 2 * 1

			// compile -> 120으로 고정됨.( Runtime 실행시가 아니라 Compile 시) -> 따라서 목적 코드에 120이 고정된다.
	cout << n << endl;

	// int a = 5;
	// int n2 = Factorial<a>::value; // 불가능! 템플릿 인자는 컴파일 시간 상수만 가능.

	// 숙제 1. binary<> 만들어 보세요
	int n3 = binary<101>::value;
	cout << n3 << endl; // 5나와야 합니다.

	// 숙제 2. 아래 코드가 컴파일 에러 나오게 해보세요.
	int n4 = binary<201>::value;
}

// 어제 숙제와 함꼐
// smkang @ ioacademy.co.kr로 보내주세요.
// 기한은 없음