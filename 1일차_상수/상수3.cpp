#include <iostream>

// C++ 11 : ������ ����� ���� ���ο� Ű���� ����

// �ݵ�� ���ڵ� ����� ���� �� �ִ�.
constexpr int foo(int a, int b) { // C++ 11 constexpr
//	constexpr int foo(constexpr int a, constexpr int b) { C++ 14 constexpr
	return a + b; // �����Ϸ��� ������ �ð��� ��� ������ �� �� �ִ�.
}

int main() {

	int n = 10;

	// C++98/03 ��Ÿ�� : 1998�� ǥ��ȭ �ǰ� 2003�� ���׼���(������) C++
	const int c1 = 10; // ok
	const int c2 = n; // ok

	// C++11/14 : 2011�� 2�� ǥ��ȭ 2014�� ���׼���(������)
	constexpr int c3 = 10; // ok
	// constexpr int c4 = n; // error ������ ����� �ƴϴ�.

	// �迭 ũ��� �Լ��� ��밡��
	// ��, �Լ����ϰ��� __ �̾�� �Ѵ�.
	int x[foo(3, 4)];
}
