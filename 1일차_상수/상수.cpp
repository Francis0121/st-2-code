#include <iostream>
using namespace std;

int main() {
	const int c = 10;

	int *p = &c; // ����� �ּҸ� int*�� ���

	*p = 20;

	cout << c << endl;
}