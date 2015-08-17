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

	// ���ٿ� �Լ� ����
	foo([](int a, int b) { return a + b; });
	// foo1( [] (int a, int b) { return a + b; } );
	// foo2([](int a, int b) { return a + b; });
}

// ���� ���ڸ� �޴� ���

// �� auto�� ���� �Լ� parameter�� �� �� ����.
// void foo(auto f1){} // foo(1)	=> int type
					// fof(3.4)	=> double

// �Ʒ� 2���� ���������� �ζ��� ġȯ ���� �ʴ´�.
// void foo1(int(*f2)(int, int)) {} 
// void foo2(function<int(int, int)> f3) {}

// �ζ��� ġȯ �����ϰ� ���ٸ� �޴� ������ ����� -template
template<typename T> void foo(T f) {
	f(1, 2);
}