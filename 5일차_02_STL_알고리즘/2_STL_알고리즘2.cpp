#include <iostream>
using namespace std;

// Step2.�˻� ������ �Ϲ�ȭ - �κ� ���ڿ� �˻��� �����ϵ��� ����.

char* xstrchr(char* first, char* last, char c) {
	while (first != last && *first != c)
		++first;

	return first == last ? 0 : first;
}

// Step1. C�� strchr() �Լ�
int main() {
	char s[] = "abcdefgh";

	char* p = xstrchr(s, s+4, 'c');

	if (p == 0)
		cout << "ã�� �� �����ϴ�" << endl;
	else
		cout << *p << endl;
}