#include <iostream>
using namespace std;

//	1.	�Ϲ� �Լ� �����Ϳ� ����Լ��� �ּҸ� ���� �� ����.
//		this ������ !!

//	2.	�Ϲ� �Լ� �����Ϳ� static ��� �Լ��� �ּҸ� ���� �� �ִ�.

class Dialog {
public :
	void Close() {
		cout << "Dialog Close" << endl;
	}
};

void foo(){
	cout << "foo" << endl;
}

int main() {
	void(*f1)() = &foo; // ok!! �Լ��������Դϴ�.
	// void(*f2)() = &Dialog::Close;// �ɱ��? 
				// error.

	// ��� �Լ� �����͸� ����� ��
	void(Dialog::*f3)() = &Dialog::Close; // ok .. �ܿ��μ���.
	// f3(); // �ɱ�� ? 
		// error. this �� ����.
	Dialog dlg;
	// dlg.f3(); // ok �ᱹ dlg.Close() �� f3(&dlg);
			// �׷��� �� ��� �����Ϸ��� f3�̶�� ����� ã�Եȴ�.
			// �׷��� Error.

	// dlg.*f3(); // f3�� �Լ� �������̹Ƿ� *f3�ϸ� �Լ��� �ȴ�.
				// ' .* ' ������ �켱������ �Լ�ȣ�� ' () ' ���� ������ �Ѵ�.
	(dlg.*f3)();
}