// 5_lamda_14
#include <iostream>
using namespace std;

int main() {
	int v = 10;

	auto f1 = [&v](){  v = 0; }; // ������ ĸ��
	// auto f2 = [v]() { v = 0; }; // ������ ĸ�� - v�� ������ �� �������� ������ ����
	auto f3 = [v]() mutable { v = 200; }; // ������ ĸ�� - ���纻�� ���� ����. ������ ���� �ȵ�.

	f1();
	cout << v << endl;
	f3();
	cout << v << endl;
}