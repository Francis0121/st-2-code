#include <iostream>
using namespace std;

// tuple �� C++ ǥ�ؿ� �̹� �ֽ��ϴ�.
// VC++2010 ~ 2012 : 10�� ���� ���� , �츮�� ���� �ڵ�� ������ ��� ���
// VC++2013 ~ 2015 : C++11�� ���� ���� ���.. �̷л� ������ ����

#include <tuple>

int main() {
	int x[10]; // ���� Ÿ�� 10�� ( vector ���� ) 
	tuple<int, double, long> t3(1, 3.3, 2); // ���� �ٸ� �ڷᱸ���� ���� ���� ���� ������ �� �ֱ� ������ !! ���

	//tuple���� �� ������
	cout << get <1>(t3) << endl;

}