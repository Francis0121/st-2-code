// 5_lamda_14
#include <iostream>
using namespace std;

int main() {
	int v = 10;

	auto f1 = [&v](){  v = 0; }; // 참조로 캡쳐
	// auto f2 = [v]() { v = 0; }; // 값으로 캡쳐 - v를 변경할 수 없음으로 컴파일 에러
	// mutable lambda
	auto f3 = [v]() mutable { v = 200; }; // 값으로 캡쳐 - 복사본을 변경 가능. 원본은 변경 안됨.

	f1();
	cout << v << endl;
	f3();
	cout << v << endl;

	// 숙제 2. f1, f2, f3이 만들어내는 클로져 클래스를 예측해보세요
	// f2가 왜 에러가 나는지 ?
	// f1은 왜 값이 바뀌는지 ?
	// f3은 복사본을 변경해도 에러가 나지 않게 하기 위해ㅔ 어떻게 할지 직접 클래스를 만들어 보세요
}