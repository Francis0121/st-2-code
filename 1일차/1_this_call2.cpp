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

	// ��� �Լ� �����͸� ����� ��
	void(Dialog::*f3)() = &Dialog::Close; // ok .. �ܿ��μ���.
	f3();
}