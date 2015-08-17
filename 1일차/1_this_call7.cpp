#include <iostream>
using namespace std;

class X {
public:
	int x;
};

class Y {
public:
	int y;
};

class C : public X, public Y {
public:
	int c;
};

//				Start	100번지
//						| X |
//	X* px | X | 100		| Y |
//	Y* py | Y |	104		| C |

int main() {
	C ccc;
	cout << &ccc << endl; // 100번지라고 할때

	X* pX = &ccc;
	Y* pY = &ccc;

	cout << pX << endl;  // ? 100
	cout << pY << endl;  // ? 104
}
