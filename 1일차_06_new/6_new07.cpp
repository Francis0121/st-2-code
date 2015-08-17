// 6_new07
#include <iostream>
using namespace std;

// ~ Exception 전달하도록 overloading
void* operator new(size_t sz){
	void *p = malloc(sz);
	if (p == 0) {
		throw std::bad_alloc(); // 예외전달.
	}
	return p;
}

// 단지, 사용되지 않고 함수 호버로딩을 위한 인자가 필요할 때
// 새로운 타입을 설계하는 것이 좋다. - "empty class" 개념
 
struct nothrow_type {}; // empty class - 아무 멤버도 없다.
nothrow_type nothrow_val; // sizeof(nothrow) => 1byte 입니다.

// ~ 0을 전달하도록 overloading
void* operator new(size_t sz, nothrow_type n){
	void *p = malloc(sz);
	return p;
}

int main() {
	int* p = new(nothrow_val) int[100];
}
