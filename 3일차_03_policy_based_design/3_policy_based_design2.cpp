// 3 단위 전략 2
#include <iostream>
using namespace std;

// 메모리 할당 해지 정책을 담은 정책 클래스
template<typename T> class allocator {
public:
	T* allocate(int sz) {
		return new T[sz];
	}
	void deallocate(T* p) {
		delete[] p;
	}
};

template<typename T> class Vector {
public:
	void resize(int sz) {
		// 메모리가 부족해서 메모리 할당을 해야 합니다.
		// malloc ? new ? pool ? system call?
	}
};