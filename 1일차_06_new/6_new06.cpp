//6_new06
#include <iostream>
using namespace std;

// �Ʒ� �ڵ忡�� �߸��� ���� ã�ƺ�����.

// 1998 ǥ��ȭ ������ ���� �ڵ尡 �ִٸ� �Ʒ� �� �ٸ� �߰��Ѵ�.
// #define new new(nothrow) 

// int main() {
//	int *p = new int[100];
//
//	if (p == 0) {
//		cout << "�޸� ����" << endl;
//	}
//	else {
//		delete[] p;
//	}
//}

// new ���н� ���ܰ� �߻��մϴ�.
int main() {

	int *p2 = new(nothrow) int[100]; // ���н� 0����
	// 1998�� �������� �Ҵ� �����ϸ� 0�� �����Ѵ�.
	// 1998�� ���� ǥ�ؿ��� exception�� ��ȯ�Ѵ�.

	int *p;
	
	try {
		p = new int[100];
		// ...
		delete[] p;
	}catch (std::bad_alloc& e) {
		cout << "�޸� ����" << endl;
	}
}