// 7 Ÿ���߷�3
#include <iostream>
using namespace std;

int x = 10;

int& foo() { return x; }

int main() {

	// T parameter = �Լ�����(expr)
	auto n = foo();	// ��Ģ 1. �캯�� Ÿ���� const , reference volatile�� ������.
					// n�� Ÿ���� ?? template�� ����
					// auto :  T , n : param , expr : = foo()
	n = 20;

	cout << x << endl; // 10

	auto& r = foo(); // ��Ģ 2. ParamType�� �����ͳ� ���� �� ��
					 // - expr�� ���۷������ ���۷����� ���õȴ�!. const�� �����ȴ�.
					 // - expr �� ����ؼ� Ÿ���� �����Ѵ�. 
					 // �캯�� �Ӽ��� ���۷��� ���� 
					 // auto : int , r : int&

	r = 20;

	cout << x << endl; // 20
}