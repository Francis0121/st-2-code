#include <iostream>
using namespace std;

// primary template : fals_type�� �⺻ Ŭ������ 
template<typename T> struct IsArray : false_type{};

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