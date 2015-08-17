#include <iostream>
using namespace std;

class Rect {
public:
	int x, y, w, h;
	int getArea() {
		return w*h;
	}
};

void foo(Rect r) {
	int n = r.getArea();
}

int main() {
	Rect r; // 초기화 했다고 가정하고

	int n = r.getArea();
	foo(r);
}