#include <iostream>
using namespace std;

// C casting�� ������
// ��κ� �����Ѵ� .. �׷��� .. �ʹ� �����ϰ� ���װ� ���� ����.
// 

int main() {
//	int n = 01;
// 	double* p = &n; //? error. ���� �ٸ� Ÿ���� �ּҴ� �Ͻ��� ��ȯ�� �ȵ�.
					// ��, C������ ���� ( Ȯ���� C�ϰ��)

//	int n = 01;
//	double* p = (double*) &n; // ����� ��ȯ - ok

//	*p = 3.4;

	const int c = 10;
	//int* p2 = &c; // error. ��� �ּҴ� �� ��� �����Ϳ� ���� �� ����.
	int* p2 = (int*)&c;// ����� ��ȯ - ok
	*p2 = 20;

	cout << c << endl;
}