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
	Rect r; // �ʱ�ȭ �ߴٰ� �����ϰ�

	int n = r.getArea();
	foo(r);
}