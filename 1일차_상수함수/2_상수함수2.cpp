#include <iostream>
using namespace std;

class Rect {
	int x, y, w, h;
public:
	/*int getArea() {
		return w*h;
	}*/
	int getArea() const { // 반드시 상수함수로 구성했어야 한다.
		return w*h;
	}
};

// C++ 기본 기법 : call by value 대신 const & 가 좋다. -> 따라서 변경하면
//void foo(Rect r) {
//	int n = r.getArea();
//}

void foo(const Rect& r) {
	int n = r.getArea();
}

int main() {
	Rect r; // 초기화 했다고 가정하고

	int n = r.getArea(); // ok ...

	foo(r);


}