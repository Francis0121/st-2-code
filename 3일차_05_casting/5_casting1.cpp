#include <iostream>
using namespace std;

// C casting�� ������

int main() {
	int n = 01;
	double* p = &n; //?

	*p = 3.4;

	const int c = 10;
	int* p2 = &c; //?
	*p2 = 20;

	cout << c << endl;
}