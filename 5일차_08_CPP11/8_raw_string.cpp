#include <iostream>
#include <string>
using namespace std;

int main() {
	// ���ڿ����� "\\"�� ����ϰ� ������
	string s = "C:\\AAA\\B";
	cout << s << endl;

	// "\" �ѹ��� ���� �� �ִ� ǥ����
	char s2[] = R"(C:\AAA\BBB)";
}