// 11_�������� ���ø�
#include <iostream>
using namespace std;

template<typename ... Types> void goo(Types ... args) {
	cout << "goo" << endl;
}

void hoo(int a, double d, char c) {
	cout << "hoo" << endl;
}

void zoo(int* a, double* b, char* c) {
	cout << "zoo" << endl;
}

// Types : �������� Ÿ���� ������ �ִ� Ÿ���� ����
// args : �������� ���� ������ �ִ� ���� ���� - " Parameter Pack"
template<typename ... Types> void foo(Types ... args) { // �� ... ��ġ �߿�
	// Parameter Pack �ȿ� ���� ������ �˰� �ʹٸ�
	cout << sizeof...(args) << endl;
	cout << sizeof...(Types) << endl;

	// Parameter Pack �� �ٸ� �Լ��� �����ϴ� ���
	goo(args...); // �� ... ��ġ �߿�
	hoo(args...);
	zoo(&args...); // ���� ������ ���� �ּҰ����� �Ѿ��.
}

int main() {
	foo(1, 3.3, 'a');
}