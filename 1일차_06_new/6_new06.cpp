//6_new06
#include <iostream>
using namespace std;

// �Ʒ� �ڵ忡�� �߸��� ���� ã�ƺ�����.

//int main() {
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
	int *p;
	
	try {
		p = new int[100];
		// ...
		delete[] p;
	}catch (std::bad_alloc& e) {
		cout << "�޸� ����" << endl;
	}
}