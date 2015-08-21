// InitializerList
#include <iostream>
using namespace std;

void foo(initializer_list<int> e) {
	auto p = e.begin(); // begin(e)

	while (p != e.end()) { // end(e)
		cout << *p << endl;
		++p;
	}
}

int main() {
	initializer_list<int> e1{ 1,2,3,4,5 };
	initializer_list<int> e2 = { 1,2,3,4,5 };

	foo(e1);
}