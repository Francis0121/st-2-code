#include <iostream>
using namespace std;

int main() {
	// auto f1 = []() { cout << "f1" << endl;  };
	// = equal statement

	// ���ڰ� ���� ���ٴ� ()�� ������ �����ϴ�.
	// Nullary Lamda expression
	auto f1 = [] { cout << "f1" << endl;  };

	f1();
}