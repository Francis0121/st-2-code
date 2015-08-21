#include <iostream>
#include <vector>
#include <type_traits>
using namespace std;

template<typename T> void show(T& c) {
	for (auto n : c) {
		cout << n << " ";
	}
	cout << endl;
}

int main() {
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	vector<int> v(x, x + 10);

	show(v);
	show(x);
}