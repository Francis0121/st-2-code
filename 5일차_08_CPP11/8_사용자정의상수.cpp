#include <iostream>
using namespace std;

class Meter {
	int value;
public:
	Meter(int n) : value(n) {}

	void print() const { cout << value << endl; }
};

// 사용자 정의 상수를 만들 때 인자 타입은 미리 정의되어 있습니다.
// unsigned long long (64bit) 또는 char *
// unsinged long double
Meter operator""_m(unsigned long long sz) {
	return Meter(sz);
}

int main() {
	float f = 3.4f; // f, s, l

	Meter aa = 3_m; // operator""m(3)

	aa.print();
}