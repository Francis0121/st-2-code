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

//				Start	100����
//						| X |
//	X* px | X | 100		| Y |
//	Y* py | Y |	104		| C |

int main() {
	C ccc;
	cout << &ccc << endl; // 100������� �Ҷ�

	ccc.fx(); // 100
	ccc.fy(); // 104

	void(C::*f)(); // �Լ������� 4����Ʈ �ƴҼ� ���ִ�.
					// ���� �Լ� �����ʹ� 8 ����Ʈ �̴�.
					// { �Լ��ּ�, this offset }

	// f = &C::fx; // f = { fx�ּ�, 0 }
	// (ccc.*f)(); // ��� ? 100 ���;� �Ѵ�.
				// f(&ccc);

	f = &C::fy; // f = { fy�ּ�, sizeof(X) �� 4 }
	(ccc.*f)(); // ��� ? 104 ���;� �Ѵ�.
				// f(&ccc); X
				// f.�Լ��ּ�(&ccc + f.this_offset)

	cout << sizeof(f) << endl;

}
