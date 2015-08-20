// 7 타입추론3
#include <iostream>
using namespace std;

int x = 10;

int& foo() { return x; }

int main() {

	// T parameter = 함수인자(expr)
	auto n = foo();	// 규칙 1. 우변의 타입중 const , reference volatile을 버려라.
					// n의 타입은 ?? template과 동일
					// auto :  T , n : param , expr : = foo()
	n = 20;

	cout << x << endl; // 10

	auto& r = foo(); // 규칙 2. ParamType이 포인터나 참조 일 때
					 // - expr이 레퍼런스라면 레퍼런스만 무시된다!. const는 유지된다.
					 // - expr 을 고려해서 타입을 결정한다. 
					 // 우변의 속성중 레퍼런스 무시 
					 // auto : int , r : int&

	r = 20;

	cout << x << endl; // 20
}