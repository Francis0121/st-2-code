// 5_lamda10
#include <iostream>
using namespace std;

int main() {
	int v1 = 10;
	int v2 = 20;

	// 지역변수 캡쳐

	// auto f = [](int a, int b) { return a + b + v1; };
	auto f = [v1](int a, int b) { return a + b + v1; };
	cout << f(1, 2) << endl;

	// 지역 변수 몇 개만 쓰고 싶다.
	auto f2 = [v1, v2](int a, int b) { return a + b + v1 + v2; };
	cout << f2(1, 2) << endl;
	
	// 모두 다 쓰고 싶을 경우에
	auto f3 = [=](int a, int b) { return a + b + v1 + v2; };
	cout << f3(1, 2) << endl;

	// 참조를 하고 싶다면 " & " 추가한다.
	auto f4 = [&v1](int a, int b) { v1 = 0; return a + b + v1; };

	cout << f4(1, 2) << endl;
	cout << v1 << endl;

	// 모든 지역 변수를 &에 의해서 캡쳐 하겠다.
	auto f5 = [&](int a, int b) { v2 = 0; return a + b + v2; };

	cout << f5(1, 2) << endl;
	cout << v2 << endl;
}