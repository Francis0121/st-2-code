#include <iostream>
using namespace std;

int a;
int* p; // int* �� Ÿ���̴�.
int x[10]; // int [10] �� x�� Ÿ���̴�.
			// T[N]

// primary template : fals_type�� �⺻ Ŭ������ 
template<typename T> struct IsArray : false_type{};
template<typename T, int N> struct IsArray<T[N]> : true_type {};

// traits�� ����� ��� �ٽ� ����
template<typename T> void foo(const T& a) {
	if (IsArray<T>::value) {
		cout << "�迭" << endl;
	} else {
		cout << "�迭 �ƴ�" << endl;
	}
}

int main() {
	int x[10];
	foo(x);
}