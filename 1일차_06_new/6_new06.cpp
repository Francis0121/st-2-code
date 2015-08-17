//6_new06
#include <iostream>
using namespace std;

// 아래 코드에서 잘못된 점을 찾아보세요.

//int main() {
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
	int *p;
	
	try {
		p = new int[100];
		// ...
		delete[] p;
	}catch (std::bad_alloc& e) {
		cout << "메모리 부족" << endl;
	}
}