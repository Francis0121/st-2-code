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

	// )" �ĺ����̹Ƿ� "�� �׳� ������ �˴ϴ�.
	char s3[] = R"(C:\A"AA\B)";

	cout << s3 << endl;

	// ������ : ���ڿ� �߰� )"�� ǥ���ϰ� ������
	// char s4[] = R"( AAA)"BBB )";

	// �ذ�å 
	// �⺻ �ĺ��� : "( )" �ε� "�� ( ���̿� ����ڰ� �߰�����
	//				"***( )***"
	char s4[] = R"**( AAA)"BBB )**";

}