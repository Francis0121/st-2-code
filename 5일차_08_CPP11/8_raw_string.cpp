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

	// )" 식별자이므로 "는 그냥 적으면 됩니다.
	char s3[] = R"(C:\A"AA\B)";

	cout << s3 << endl;

	// 문제점 : 문자열 중간 )"를 표시하고 싶을때
	// char s4[] = R"( AAA)"BBB )";

	// 해결책 
	// 기본 식별자 : "( )" 인데 "와 ( 사이에 사용자가 추가가능
	//				"***( )***"
	char s4[] = R"**( AAA)"BBB )**";

}