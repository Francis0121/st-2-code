// 5_lamda
// 1. �ζ��� �Լ��� �Լ� ������ ����

int Add1(int a, int b) { 
	return a + b; 
}

inline int Add2(int a, int b) {
	return a + b;
}

int main() {
	int n1 = Add1(1, 2); // ȣ��
	int n2 = Add2(1, 2); // ���� �ڵ� ġȯ - �ӵ��� ��������.

	int(*f)(int, int);

	f = &Add2;

	int n3 = f(1, 2);
}