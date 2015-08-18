#include <iostream>
using namespace std;

template<typename T> struct IsPointer {
	enum { value = false };
};
template<typename T> struct IsPointer<T*> {
	enum { value = true };
};

// �����Ϸ� ���� ���
// 1. T�� �����ؼ� �Լ� ����
// 2. ������ �Լ� ������ - ���� ���� Ȯ��
// 3. ����ȭ �ؼ� ������� �ʴ� �ڵ� ����.
template<typename T> void printv(T a) {
	if (IsPointer<T>::value)
		cout << a << ", " << *a << endl;
	else
		cout << a << endl;
}

int main() {
	int n = 3;
	printv(n);  // 1. problem 
	printv(&n); // 2. ok
}