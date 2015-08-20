// 6완벽한전달자3
#include <iostream>
using namespace std;

// 이동 가능한 참조 만들기 - 어려운 내용입니다.(그렇다네요?)
// C++ 참조 : 값이 이동하는 참조. 처음 초기화된 메모리를 계속 참조 한다.
int main() {
	int n1 = 10;
	int n2 = 20;

	int& r1 = n1;
	int& r2 = n2;

	r2 = r1; // 이 한줄의 결과를 예측해 보세요.

						// 값 이동시		참조이동시
	cout << n1 << endl; // 10			10
	cout << n2 << endl; // 10			20
	cout << r1 << endl; // 10			10
	cout << r2 << endl; // 10			10
} 