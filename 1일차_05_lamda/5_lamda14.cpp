// 5_lamda_14
#include <iostream>
using namespace std;

int main() {
	int v = 10;

	auto f1 = [&v](){  v = 0; }; // 참조로 캡쳐
	// auto f2 = [v]() { v = 0; }; // 값으로 캡쳐 - v를 변경할 수 없음으로 컴파일 에러
	auto f3 = [v]() mutable { v = 200; }; // 값으로 캡쳐 - 복사본을 변경 가능. 원본은 변경 안됨.

	f1();
	cout << v << endl;
	f3();
	cout << v << endl;
}