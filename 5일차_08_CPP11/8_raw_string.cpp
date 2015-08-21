#include <iostream>
#include <string>
using namespace std;

int main() {
	// 문자열에서 "\\"을 사용하고 싶을때
	string s = "C:\\AAA\\B";
	cout << s << endl;

	// "\" 한번만 적을 수 있는 표현식
	// R"(    )"
	char s2[] = R"(C:\AAA\B)";

	cout << s2 << endl;

}