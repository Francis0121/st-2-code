#include <iostream>
using namespace std;

int main() {
	int n = 0;
	
	while (true) {
		cin >> n; // 'a' �� �Է��ؼ� enter

		if (cin.fail()) {
			cout << "�ٽ� �Է��ϼ���" << endl;
			cin.clear(); // ���������� �����Ǵ� state ����� reset �� �� �ٽ� �Է� �޾ƾ��Ѵ�.
			cin.ignore();// �Է� ���۸� ����.
			continue;
		}
		break;
	}

	cout << n << endl; // 1. 10 2. 97 3. 0 4. -1

}