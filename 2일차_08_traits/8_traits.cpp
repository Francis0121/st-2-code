#include <iostream>
using namespace std;

template<typename T> void printv(T a) {
	cout << a << endl;
}

int main() {
	int n = 3;
	double d = 3.3;

	printv(n);
	printv(d);

	printv(&d);
}