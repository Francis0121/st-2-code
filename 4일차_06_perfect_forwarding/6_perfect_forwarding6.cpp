#include <iostream>
#include <functional>
using namespace std;
using namespace placeholders;

void foo(int a, int& b) {
	cout << "foo" << endl;
	b = 10;
}

int main() {
	int x = 0, y = 0;
	function<void()> f;
	
	f = bind(&foo, x, ref(y));
	f(); // foo(x, y);

	cout << x << endl;
	cout << y << endl; // 10이 나오게 해보세요.
}