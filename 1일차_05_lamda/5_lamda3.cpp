//5_lamda3
//3. () �����ڸ� ������ �� Ŭ���� - �Լ� ��ü
# include <iostream>
using namespace std;

struct Plus
{
	int operator()(int a, int b) {
		return a + b;
	}
};

int main() {
	Plus p;
	int n = p(1, 2); // �� �� ���� �� ������ ������.
	cout << n << endl;
}