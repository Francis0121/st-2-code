#include <iostream>
#include <string>
using namespace std;

int main() {
	// ���ڿ����� "\\"�� ����ϰ� ������
	string s = "C:\\AAA\\B";
	cout << s << endl;

	// "\" �ѹ��� ���� �� �ִ� ǥ����
	// R"(    )"
	char s2[] = R"(C:\AAA\B)";

	cout << s2 << endl;

}