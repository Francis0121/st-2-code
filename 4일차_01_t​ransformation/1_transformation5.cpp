#include <iostream>
using namespace std;

int main() {
	int n = 0;
	cin >> n;

	// 입력 성공을 조사하는 방법 1. fail() 멤버 함수
	if (cin.fail()) {

	}

	// 2. cin 자체를 if로 조사
	if (cin) { // cin.opeartor void*()가 있기 때문에 가능하다.
		cout << "성공" << endl;
	}
}

// cin 은 istram 클래스 입니다. jerry schwarz 이라는 개발자가 만들었습니다.