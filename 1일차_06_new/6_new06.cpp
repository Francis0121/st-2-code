//6_new06
#include <iostream>
using namespace std;

// 아래 코드에서 잘못된 점을 찾아보세요.

// 1998 표준화 이전에 만든 코드가 있다면 아래 한 줄만 추가한다.
// #define new new(nothrow) 

// int main() {
//	int *p = new int[100];
//
//	if (p == 0) {
//		cout << "메모리 부족" << endl;
//	}
//	else {
//		delete[] p;
//	}
//}

// new 실패시 예외가 발생합니다.
int main() {

	int *p2 = new(nothrow) int[100]; // 실패시 0리턴
	// 1998년 이전에는 할당 실패하면 0을 리턴한다.
	// 1998년 이후 표준에는 exception을 반환한다.

	int *p;
	
	try {
		p = new int[100];
		// ...
		delete[] p;
	}catch (std::bad_alloc& e) {
		cout << "메모리 부족" << endl;
	}
}