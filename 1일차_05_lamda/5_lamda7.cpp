#include <iostream>
using namespace std;

// ���ٿ� Ÿ��
int main() {
	// ���ٴ� auto�� ������ �ֽ��ϴ�.
	auto f1 = [](int a, int b) {return a + b; };

	cout << f1(1, 2) << endl;
}