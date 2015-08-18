#include <iostream>
using namespace std;

int a;
int* p; // int* �� Ÿ���̴�.
int x[10]; // int [10] �� x�� Ÿ���̴�.
			// T[N]

// primary template : fals_type�� �⺻ Ŭ������ 
template<typename T> struct IsArray : false_type{
	static const int size = -1; // �迭�� �ƴ�����
};
template<typename T, int N> struct IsArray<T[N]> : true_type {
	static const int size = N;
};

// traits�� ����� ��� �ٽ� ����
template<typename T> void foo(const T& a) {
	if (IsArray<T>::value) {
		cout << "�迭, ũ��� " << " " << IsArray<T>::size << endl;
	} else {
		cout << "�迭 �ƴ�" << endl;
	}
}

int main() {
	int x[10];
	foo(x);
}