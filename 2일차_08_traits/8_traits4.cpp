#include <iostream>
using namespace std;

template<typename T> struct IsPointer {
	enum { value = false };
};
template<typename T> struct IsPointer<T*> {
	enum { value = true };
};

// �������� ��츦 ó���ϴ� �Լ�
template<typename T> void printv_imp(T a, Yes) {
	cout << a << " " << *a << endl;
}

// �����Ͱ� �ƴ� ���
template<typename T> void printv_imp(T a, No) {
	cout << a << endl;
}

template<typename T> void printv(T a) {
	if (IsPointer<T>::value)
		cout << a << ", " << *a << endl;
	else
		cout << a << endl;
}

int main() {
	int n = 3;
	printv(n); 
}