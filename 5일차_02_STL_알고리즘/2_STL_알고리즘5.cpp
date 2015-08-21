#include <iostream>
using namespace std;

template<typename T1, typename T2>
T1 xfind(T1 first, T1 last, T2 c) {
	while (first != last && *first != c)
		++first;

	return first == last ? 0 : first;
}

int main() {
	double x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	double* p = xfind(x, x + 10, 5); 
	cout << *p << endl;
}