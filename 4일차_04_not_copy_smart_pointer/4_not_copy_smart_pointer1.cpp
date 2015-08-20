// 4 복사 금지 smart Pointer

#include <iostream>
using namespace std;

// 1. Template으로 만들어야한다.

// 2. 얕은복사 문제를 해결해야 한다.
//		A. 깊은복사 - 스마트 포인터 만들때는 거의 사용하지 않는다.
//		B. 참조계수 - 스마트 포인터 만들때 "가장" 널리 쓰이는 방법
//		C. 소유권이전 - ?
//		D. 복사금지 - 요즘에 뜨고 있는 방식. ( 최 신 유 행 )
//			단지 자원 관리 목적으로만 사용된다면
//			참조계수 방식 보다 복사 금지 방식의 스마트 포인터가 좋다.		
//
//			장점 : 모든 함수가 inline 치환된다.
//			참조계수를 위한 어떠한 메모리도 필요없다.
//			스마트 포인터 도입에 따른 오버헤드가 전혀 없다.
//			C++ 표준의 unique_ptr<> 클래스가 이 방식.

template <typename T>
class Ptr {
	T* obj;
	
	// 단순히 자원관리 용도로만 사용할때는
	// 참조계수도 오버헤드가 있다.
	// 자원 관리 전용 스마트 포인터도 제공하자 = 복사 금지
	Ptr(const Ptr&) = delete;
	Ptr& operator=(const Ptr& p) = delete;

public:
	inline Ptr(T* p = 0) : obj(p) {

	}
	inline ~Ptr() {
		delete obj;
	}

	inline T* operator->() {
		return obj;
	}

	inline T& operator*() {
		return *obj;
	}
};

int main() {
	Ptr<int> p1 = new int;
//	Ptr<int> p2 = p1;
}