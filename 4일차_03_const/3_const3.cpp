#include <iostream>
using namespace std;

int main() {
	int n = 10;

	const int* p1 = &n; // p1�� const�ƴ�. p1�� ���󰡸� const
	int* const p2 = &n; // p2�� constt. p2�� ���󰡸� const �ƴ�.

	// pl�� ����Ű�� ���� r1�� ��������
	// p2�� ����Ű�� ���� r2�� ��������.

	const int*& r1 = p1; // ����� ����Ű�� �Ϳ� �������� ����
	int* const& r2 = p2; // ��� ������(������ ��ü�� ���)�� ����
}