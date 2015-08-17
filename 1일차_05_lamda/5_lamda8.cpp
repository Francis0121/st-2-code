#include <iostream>
#include <functional>
using namespace std;

int main() {
	// 람다는 3가지 형태 변수에 담을 수 있습니다.

	// auto
	auto f1 = [](int a, int b) {return a + b; };
	
	// 함수 포인터
	int(*f2)(int,int) = [](int a, int b) {return a + b; };

	// C++11 fuction 
	function<int(int, int)> f3 = [](int a, int b) {return a + b; };

	f1(1, 2);
	f2(1, 2);
	f3(1, 2);
}