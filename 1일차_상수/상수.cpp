#include <iostream>
using namespace std;

// int *p -> 100 - ��� c 10 ReadOnly (�Ұ���)

int main() {
	// const int c = 10; ----> 1 // ������ �ð� ���, ��ũ�� ó�� �����Ѵ�.

	int n  = 10; // ----> 2
	const int c = n;

	// int *p = &c; // ����� �ּҸ� int*�� ���
				// error

	int* p = (int*)&c; // ������ Casting �Ǵ� C++ const_cast<> �� ok

	*p = 20;

	cout << c << endl; // ----> 1. 10 ,  ----> 2. 20 ȣ��
	cout << *p << endl; // 20
}