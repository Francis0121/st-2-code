#include <iostream>
#include <algorithm> // ��å ������ ������ sort()�� �̹� �����Ѵ�.
using namespace std;

bool cmp1(int a, int b) {
	return a < b;
}

bool cmp2(int a, int b) {
	return a > b;
}

int main() {
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };

	// sort�� ��� ���ڴ� ���ø� �Դϴ�.
	// 1. ����å���� �Ϲ� �Լ��� ����ϴ� ���
	// ���� : ��å�� ������ ��ü �ص� sort() ����� �Ѱ��̴�.�޸� ��뷮 ����
	// ���� : ��å�� �ζ��� ġȯ�� �� ���� ������ ���� ���ϰ� �ִ�.
	sort(x, x + 10, cmp1); // sort(int* ,int* , bool(*)(int,int)) �Լ� ����
	sort(x, x + 10, cmp2); // sort(int* ,int* , bool(*)(int,int)) �Լ� ����
}