#include <iostream>
using namespace std;

// Step2.검색 범위의 일반화 - 부분 문자열 검색이 가능하도록 하자.

char* xstrchr(char* first, char* last, char c) {
	while (first != last && *first != c)
		++first;

	return first == last ? 0 : first;
}

// Step1. C의 strchr() 함수
int main() {
	char s[] = "abcdefgh";

	char* p = xstrchr(s, s+4, 'c');

	if (p == 0)
		cout << "찾을 수 없습니다" << endl;
	else
		cout << *p << endl;
}