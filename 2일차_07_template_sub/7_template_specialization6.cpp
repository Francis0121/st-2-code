#include <iostream>
using namespace std;

template <typename T, typename U> ? Mul(T a, U b) {
	return a * b;
}

//template <typename T> T Mul(T a, T b) {
//	return a*b;
//}

//int Mul(int a, int b) {
//	return a*b;
//}

int main() {
	cout << Mul(3.3, 2.2) << endl;
}