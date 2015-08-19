// 3 단위전략 4
#include <iostream>
#include <string>
using namespace std;

// string 클래스이 모양은 아래와 유사합니다.
//template<typename T, // UNICODE 고려
//	typename traits, // 단위전략
//	typename Alloc> // 메모리 할당기
//class basic_string {
//	Alloc alloc;
//
//	T* buff;
//public:
//	bool operator==(const basic_string& s) {
//		// 두 개의 문자열 비교하기
//		return traits::cmp(sbuff, s.bff);
//	}
//};
//
//// w_char_t -> UNICODE
//typedef basic_string<char, char_traits<char>, allocator<char>> string;

// basic_string이 사용할 비교 단위 전략
// 단위 전략 만들 떄 일부 함수의 정책만 변경하려면
// 기본 단위 전략의 자식으로 만들어도 됩니다.
struct my_traits : public char_traits<char>{
	static bool eq(char a, char b) {
		return toupper(a) == toupper(b);
	}

	static bool lt(char a, char b) {
		return toupper(a) < toupper(b);
	}

	static bool gt(char a, char b) {
		return toupper(a) > toupper(b);
	}

	static bool compare(const char* a, const  char* b, int sz) {
		return _memicmp(a, b, sz);
	}
};
typedef basic_string<char, my_traits, allocator<char>> my_string;

int main() {
	my_string s1 = "ABCD";
	my_string s2 = "abcd";
	
	if (s1 == s2) {
		cout << "Same" << endl;
	}
	else {
		cout << "not same" << endl;
	}
}