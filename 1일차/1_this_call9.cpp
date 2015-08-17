#include <iostream>
using namespace std;


// callback �� �Լ� ������ ����
class Button {

	void(*handler)();

public :

	void setHandler(void(*f)()) {
		handler = f;
	}

	void click() {
		// ��ư�� ���ȴٴ� ����� �ܺο� �����մϴ�. 
		// ���� "��ü�� �ܺο� �̺�Ʈ�� �߻��Ѵ�." ��� ǥ��.

		handler();
	}
};

int main() {
	Button b1, b2;
	b1.click(); // ����ڰ� ��ư�� Ŭ���ϸ� �� �Լ��� ȣ��ȴٰ� �����մϴ�.
}