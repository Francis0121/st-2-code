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
	// double* p = static_cast<double*>(&n);// int* -> double*
										// error
	double* p = reinterpret_cast<double*>(&n);
	const int c = 10;
	int* p2 = (int*)&c;
	
}