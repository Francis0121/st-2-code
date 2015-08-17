#include <iostream>
#include <functional>
using namespace std;

int main() {
	// ���ٴ� 3���� ���� ������ ���� �� �ֽ��ϴ�.

	// auto
	auto f1 = [](int a, int b) {return a + b; };
	// �Լ� ��ü�� ���� ������ inline ġȯ �� �� �ִ�.
	
	// �Լ� ������
	int(*f2)(int,int) = [](int a, int b) {return a + b; };
	// inline ġȯ�� �� ����. �Լ������ͷ� �� ���� �� �ִ�.

	// C++11 fuction 
	function<int(int, int)> f3 = [](int a, int b) {return a + b; };
	// inline ġȯ�� �� ����. binde�� �� ���� �� �ִ�.

	f1(1, 2);
	f2(1, 2);
	f3(1, 2); 
}