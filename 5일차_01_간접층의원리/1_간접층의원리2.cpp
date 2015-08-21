// 1_간접층의원리2
#include <iostream>
using namespace std;

class String {
	char *buf;
	int *ref;
public:
	String(const char* s) {
		buf = new char[strlen(s) + 1];
		ref = new int(1);
		strcpy(buf, s);
	}

	String(const String& s) {
		buf = s.buf;
		ref = s.ref;
		++(*ref);
	}

	~String() {
		if (--(*ref) == 0) {
			delete[] buf;
			delete ref;
		}
	}
	void print() const {
		cout << buf << endl;
	}
};

int main() {
	String s1 = "hello";
	String s2 = s1; // 잘생각해보세요.

	s1.print();
	s2.print();
}