// 2_Decay1.cpp

#include <iostream>
#include <typeinfo> // RTTI ��� ���
using namespace std;

// ���ø��� ���� ��
// ��(T)�� ���� ������ : �迭 -> ������
//					    �Լ� -> �Լ� ������
//						�� ����ȯ �Ǿ� ���� �˴ϴ�.
//						Argument Decay�� �Ҹ��� �����Դϴ�.

// ���� T(&)�� ���� ������ : �迭 => �迭, �Լ� => �Լ��� ��Ȯ�� ���� �˴ϴ�.

// ���ڿ��� �����Ͱ� �ƴ϶� �迭 �Դϴ�.

// main : �Լ�
// &main : �Լ� �ּ�
// ������ �Լ��� �Լ� �����ͷ� �Ƚ��� ����ȯ �˴ϴ�.

template<typename T> void foo(T& a) {
	// T�� ���� Ÿ������ ���� �Ǿ����� �˰� �ʹٸ� �Ʒ� ó�� Ȯ��
	cout << typeid(a).name() << endl; // �Ǵ� typeid(T).name()
}

int main() {
	int n = 0;
	int x[10];

	foo(n);		// T => int
	foo(x);		// ?
	foo("abcd");// ?
	foo(main);	// ?
}