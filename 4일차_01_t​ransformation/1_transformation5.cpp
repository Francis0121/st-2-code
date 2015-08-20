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
void true_function(){}
class istream {
public :
	bool fail(){}
	/*operator bool() {
		return fail() ? false : true;
	}*/
	/*operator void*() {
		return fail() ? 0 : this;
	}*/
	typedef void(*PF)();
	operator PF() { return fail() ? 0 : &true_function; }
};

istream cin;

// Cin을 scalar test 하고 싶었습니다. if(Cin) ...

// 1. bool로 변환되면 된다.. 그런데
cin << n; // cin이 bool로 변하면 << 연산자가 shift 연산자로 인식되어서 에러가 나지 않는다.

// 2. if()에 놓이는데 <<는 에러가 나야 했다. -> 포인터로 변환
//	그런데 boost팀에서는 아래 문제점을 제시한다.
delete cin; // 컴파일 할 때 에러가 나지 않는다.

// 3. if() 놓이고 싶다. shift 연산 불가능, delete 안되야 한다.
//	함수포인터로 변환하자