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

	// ���� ���� �� ���� ���� �ʹ�.
	auto f2 = [v1, v2](int a, int b) { return a + b + v1 + v2; };
	cout << f2(1, 2) << endl;
	
	// ��� �� ���� ���� ��쿡
	auto f3 = [=](int a, int b) { return a + b + v1 + v2; };
	cout << f3(1, 2) << endl;

	// ������ �ϰ� �ʹٸ� " & " �߰��Ѵ�.
	auto f4 = [&v1](int a, int b) { v1 = 0; return a + b + v1; };

	cout << f4(1, 2) << endl;
	cout << v1 << endl;

	// ��� ���� ������ &�� ���ؼ� ĸ�� �ϰڴ�.
	auto f5 = [&](int a, int b) { v2 = 0; return a + b + v2; };

	cout << f5(1, 2) << endl;
	cout << v2 << endl;
}