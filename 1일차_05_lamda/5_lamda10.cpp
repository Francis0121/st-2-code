// 5_lamda10
#include <iostream>
using namespace std;

int main() {
	int v1 = 10;
	int v2 = 20;

	// �������� ĸ��
	// auto f = [](int a, int b) { return a + b + v1; };
	auto f = [v1](int a, int b) { return a + b + v1; };

	cout << f(1, 2) << endl;
}