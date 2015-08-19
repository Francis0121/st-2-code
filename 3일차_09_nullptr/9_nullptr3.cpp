// 9_nullptr - C++11�� ���ο� ����

#include <iostream>
using namespace std;

void foo(int n) {
	cout << "int" << endl; // 1
}

void foo(void* p) {
	cout << "void*" << endl; //2
}

void goo(char* p) {
	cout << "char*" << endl; //3
}

int main() {
	int* p = nullptr; // ������ 0�� ��Ÿ���� ���
	char* p2 = nullptr;

	//int n = nullptr; // error .. ������ 0���� ���� 0�� �ƴϴ�.

	foo(nullptr);
	goo(nullptr);
}