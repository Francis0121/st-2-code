#include <iostream>
using namespace std;

int main() {
	int n = 0;
	cin >> n;

	// �Է� ������ �����ϴ� ��� 1. fail() ��� �Լ�
	if (cin.fail()) {

	}

	// 2. cin ��ü�� if�� ����
	if (cin) { // cin.opeartor void*()�� �ֱ� ������ �����ϴ�.
		cout << "����" << endl;
	}
}

// cin �� istram Ŭ���� �Դϴ�. jerry schwarz �̶�� �����ڰ� ��������ϴ�.