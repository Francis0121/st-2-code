#include <iostream>
using namespace std;

// Traits ��� : T�� �پ��� �Ӽ�(Ư¡)�� ������ �ð��� �˾Ƴ��� ���

template<typename T> struct IsPointer {
	enum { value = false };
};

template<typename T> struct IsPointer<T*>{
	enum { value = true };
};

template<typename T> void foo(T a) {
	if (IsPointer<T>::value)
		cout << "������" << endl;
	else
		cout << "������ �ƴ�" << endl;
}

int main() {
	int n = 0;
	foo(n);
	foo(&n);
}