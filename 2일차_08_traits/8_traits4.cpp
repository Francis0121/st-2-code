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

// ����ڰ� ����ϴ� ����
template<typename T> void printv(T a) {

	// �ȵǴ� ��� if���� ��� ��Ÿ�� �̱� ������ ������ Ÿ�ӿ� �������� ���� �ʵ��� �ؾ��Ѵ�.!
	// if���� ����ð��Դϴ�. �׷��� �Ʒ��ڵ�� ����ð� �Լ��� ���õ˴ϴ�.
	// �׷��� �����Ϸ��� Yes������ No ������ ��� �Լ� ���ø��� �ν��Ͻ�ȭ �ϰ� �ˤ���.
	// �ᱹ �����Ͱ� �ƴ� ��� Yes �������� error �߻�.
	/*if (T is Pointer)
		printv_imp(a, Yes);
	else
		printv_imp(a, No);*/

	// �Լ� �����ε��� ������ �ð� �Լ� ���� �Դϴ�.
	// ���õ��� ���� ���ø��� �ν��Ͻ�ȭ ���� �ʽ��ϴ�.
	// ��, int�� ��� Yes������ ������ ���� �ʽ��ϴ�.
	// printv_imp(a, T is Pointer ? )
	printv_imp(a, T is Pointer ? );
}

int main() {
	int n = 3;
	printv(n); 
}