#include <iostream>
using namespace std;

// �Լ� �����ε��� ����
void foo(int&) { //1
	cout << "int&" << endl;
}

void foo(int&&) { //2
	cout << "int&&" << endl;
}

void foo(const int&) { //3
	cout << "const int&" << endl;
}

int main() {
	int n = 10;
	//foo(n); // 1 --> 1���� ���� ��� 3
	// foo(10); // 2 -- > 2���� ���� ��� 3

	int&& r = 10;
	foo(r); // 1 --> rvalue reference�� lavlue�̴�.

}