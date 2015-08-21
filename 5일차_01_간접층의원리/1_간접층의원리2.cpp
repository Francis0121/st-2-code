// 1_�������ǿ���2
#include <iostream>
using namespace std;

class String {
	char *buf;
	int *ref; // �������
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

	// [] ������ ������ : ��ü�� �迭ó�� ��밡���ϰ� �Ѵ�.
	// s[0] = 'a' ó�� [] ȣ���� lvalue�� ���� �Ϸ��� ���� �����ؾ� �Ѵ�.
	char& operator[](int index) {
		cout << "operator[]" << endl;
		return buf[index];
	}
	
};

int main() {
	String s1 = "hello";
	String s2 = s1; // �߻����غ�����.

	char c = s1[0]; // �д� �۾��̴�. �ڿ�(���ڿ�)�� ��� �����Ѵ�
	cout << c << endl; // 'h'

	s1[0] = 'x'; // ���� �۾��̴�. �ڿ��� �и��ϰ� �����ؾ��Ѵ�.
				// Copy On Write

	s1.print(); // "xello"
	s2.print(); // "hello"
}