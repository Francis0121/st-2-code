#include <iostream>
using namespace std;

// C++�� 4���� ĳ���� �����ڸ� �����Ѵ�.
// static_cast : void* => �ٸ� Ÿ���� ���
//				 �� �ܿ��� �������� �־�� �Ѵ�.
//
// reinterpret_cast : �޸��� ���ؼ�, ��κ� ����.
// 
// const_cast :
// dynamic_cast :

int main() {

	int* p3 = static_cast<int*>( malloc(100) ); // void* -> int*  ��ȯ

	int n = 01;
	// double* p = (double *) &n; 
	// double* p = static_cast<double*>(&n);// error. int* -> double*
	double* p = reinterpret_cast<double*>(&n);

	const int c = 10;
	// int* p2 = (int*)&c;
	// int* p2 = static_cast<int*>(&c); // error. const int* -> int* 
	// int* p2 = reinterpret_cast<int*>(&c); // error. ����� ���Ŵ� �ȵ�
	int* p2 = const_cast<int*>(&c); // ok ����� ����
	// ������ �Ʒ�ó�� ����ϸ� ���� ȥ�������� ����.
	*p = 20;
}