#include <iostream>
using namespace std;

class Meter {
	int value;
public:
	Meter(int n) : value(n) {}

	void print() const { cout << value << endl; }
};

// ����� ���� ����� ���� �� ���� Ÿ���� �̸� ���ǵǾ� �ֽ��ϴ�.
// unsigned long long (64bit) �Ǵ� char *
// unsinged long double
Meter operator""_m(unsigned long long sz) {
	return Meter(sz);
}

int main() {
	float f = 3.4f; // f, s, l

	Meter aa = 3_m; // operator""m(3)

	aa.print();
}