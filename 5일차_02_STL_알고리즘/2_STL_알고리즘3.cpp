#include <iostream>
using namespace std;

char* xstrchr(char* first, char* last, char c) {
	while (first != last && *first != c)
		++first;

	return first == last ? 0 : first;
}

int main() {
	char s[] = "abcdefgh";

	char* p = xstrchr(s, s + 4, 'a');

	if (p == 0)
		cout << "찾을 수 없습니다" << endl;
	else
		cout << *p << endl;
}