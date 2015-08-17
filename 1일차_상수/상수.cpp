#include <iostream>
using namespace std;

int main() {
	const int c = 10;

	int *p = &c; // 상수의 주소를 int*에 담기

	*p = 20;

	cout << c << endl;
}