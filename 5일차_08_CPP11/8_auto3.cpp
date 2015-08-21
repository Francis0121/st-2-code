#include <iostream>
using namespace std;

int x = 10;
int& foo() { return x; }

// 완벽한 전달 함수
template<typename F> decltype(auto) HowLong(F f) {
	return f();
}

int main() {
	auto& n = HowLong(foo);

	n = 20;

	cout << x << endl;
}