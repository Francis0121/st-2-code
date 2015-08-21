// 1_간접층의원리2
#include <iostream>
using namespace std;

class String {
	char *buf;
	int *ref; // 참조계수
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

	// 문제를 해결하기 위해 새로운 요소를 도입한다.
	// char 를 대신하는 요소를 만들자
	class CharProxy {
		String& str;
		int index;
	public:
		CharProxy(String& s, int n) : str(s), index(n) {}
		// Proxy는 char로 변할 수 있어야 한다.
		operator char() {
			cout << "읽는 작업중, 복사본 필요 없다." << endl;
			return str.buf[index];
		}

		// Proxy는 char을 대입 할 수 있어야 한다.
		CharProxy& operator =(char c) {
			cout << "쓰는 작업중. 복사본을 만들어야 한다." << endl;
			str.buf[index] = c;
			return *this;
		}
	};

	// char 대신, CharProxy를 리턴한다.
	CharProxy operator[](int index) {
		cout << "operator[]" << endl;
		return CharProxy(*this, index);
	}

	// [] 연산자 재정의 : 객체를 배열처럼 사용가능하게 한다.
	// s[0] = 'a' 처럼 [] 호출이 lvalue에 오게 하려면 참조 리턴해야 한다.
	/*char& operator[](int index) {
		cout << "operator[]" << endl;
		return buf[index];
	}*/
	
};

int main() {
	String s1 = "hello";
	String s2 = s1; // 잘생각해보세요.

	char c = s1[0]; // 읽는 작업이다. 자원(문자열)은 계속 공유한다
	cout << c << endl; // 'h'

	s1[0] = 'x'; // 쓰는 작업이다. 자원을 분리하고 변경해야한다.
				// Copy On Write

	s1.print(); // "xello"
	s2.print(); // "hello"
}