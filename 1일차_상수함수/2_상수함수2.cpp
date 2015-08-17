#include <iostream>
using namespace std;

// �ٽ� : ��� �Լ��� �ʼ��̴�. ��ü�� ���¸� �������� �ʴ� ��� ��� �Լ��� �ݵ�� ����Լ��� ������ �Ѵ�.

// void foo( const Rect& r) �ڵ忡�� r�� ���ؼ� ������ ���� �� �־ �Ѵ�.

class Rect {
	int x, y, w, h;
public:
	/*int getArea() {
		return w*h;
	}*/
	int getArea() const { // �ݵ�� ����Լ��� �����߾�� �Ѵ�.
		return w*h;
	}
};

// C++ �⺻ ��� : call by value ��� const & �� ����. -> ���� �����ϸ�
//void foo(Rect r) {
//	int n = r.getArea();
//}

void foo(const Rect& r) {
	int n = r.getArea();
}

int main() {
	Rect r; // �ʱ�ȭ �ߴٰ� �����ϰ�

	int n = r.getArea(); // ok ...

	foo(r);


}