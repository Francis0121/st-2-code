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
void true_function(){}
class istream {
public :
	bool fail(){}
	/*operator bool() {
		return fail() ? false : true;
	}*/
	/*operator void*() {
		return fail() ? 0 : this;
	}*/
	typedef void(*PF)();
	operator PF() { return fail() ? 0 : &true_function; }
};

istream cin;

// Cin�� scalar test �ϰ� �;����ϴ�. if(Cin) ...

// 1. bool�� ��ȯ�Ǹ� �ȴ�.. �׷���
cin << n; // cin�� bool�� ���ϸ� << �����ڰ� shift �����ڷ� �νĵǾ ������ ���� �ʴ´�.

// 2. if()�� ���̴µ� <<�� ������ ���� �ߴ�. -> �����ͷ� ��ȯ
//	�׷��� boost�������� �Ʒ� �������� �����Ѵ�.
delete cin; // ������ �� �� ������ ���� �ʴ´�.

// 3. if() ���̰� �ʹ�. shift ���� �Ұ���, delete �ȵǾ� �Ѵ�.
//	�Լ������ͷ� ��ȯ����