// static_assert
#include <iostream>
#include <assert.h>
using namespace std;

// ���� assert() ����ð� �����ϴ� �Լ�.
void foo(int age) {
	// ���ڸ� ������ ������� ����
	// ���� ���� ��ȿ������ ���� Ȯ���ϴ� ���� ����.
	assert(age > 0); // ������ �������� ������ abort()�� ȣ���ϰ� �����Ѵ�.

	char *p = new char[age];
}

int main() {
	foo(-10);
}