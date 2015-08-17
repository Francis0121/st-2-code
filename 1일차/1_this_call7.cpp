#include <iostream>
using namespace std;

class X {
public:
	int x;
	void fx() {
		cout << this << endl; // 100
	}
};

class Y {
public:
	int y;
	void fy(){
		cout << this << endl;
	}
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

	ccc.fx(); // 100
	ccc.fy(); // 104

	void(C::*f)(); // 함수포인터 4바이트 아닐수 도있다.
					// 다중 함수 포인터는 8 바이트 이다.
					// { 함수주소, this offset }

	// f = &C::fx; // f = { fx주소, 0 }
	// (ccc.*f)(); // 결과 ? 100 나와야 한다.
				// f(&ccc);

	f = &C::fy; // f = { fy주소, sizeof(X) 즉 4 }
	(ccc.*f)(); // 결과 ? 104 나와야 한다.
				// f(&ccc); X
				// f.함수주소(&ccc + f.this_offset)

	cout << sizeof(f) << endl;

}
