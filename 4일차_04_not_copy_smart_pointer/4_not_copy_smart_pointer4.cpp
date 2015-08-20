// 4 복사 금지 smart Pointer
#include <iostream>
using namespace std;

struct Freer {
	inline void operator()(void* p) const {
		cout << "free 사용" << endl;
		free(p);
	}
};

template<typename T>
struct DefaultDelete {
	inline void operator()(T* p) const {
		cout << "delete 사용" << endl;
		delete p;
	}
};

// 배열 delete를 위한 부분 전문화 버전
template<typename T>
struct DefaultDelete<T[]> {
	inline void operator()(T* p) const {
		cout << "delete[]사용" << endl;
		delete[] p;
	}
};

template <typename T, typename D = DefaultDelete<T>>
class UniquePtr {
	T* obj; 
	UniquePtr(const UniquePtr&) = delete;
	UniquePtr& operator=(const UniquePtr& p) = delete;

public:
	inline explicit UniquePtr(T* p = 0) : obj(p) {

	}
	inline ~UniquePtr() {
		D()(obj);
	}

	inline T* operator->() {
		return obj;
	}

	inline T& operator*() {
		return *obj;
	}
};

// 배열일때를 위한 부분 전문화 - 부분전문화 버전에서는 디폴트 인자를 표시하지 않게 됩니다.
// primary 버전의 디폴트 값을 사용하게 됩니다.
template <typename T, typename D>
class UniquePtr<T[], D> {
	T* obj; 
	UniquePtr(const UniquePtr&) = delete;
	UniquePtr& operator=(const UniquePtr& p) = delete;
public:
	inline explicit UniquePtr(T* p = 0) : obj(p) {}
	inline ~UniquePtr() { D()(obj); }
	
	// 배열 버전에서는 []연산자도 제공하면좋습니다.
	inline T& operator[](int index) { return obj[index]; }

	// 아래 2개도 있어도 되지만, C+++ 표준에서는 배열버전에서는 아래 2개는 제거했습니다.
	// inline T* operator->() { return obj; }
	// inline T& operator*() { return *obj; }
	
};

// core/include/utils/UniquePtr.h
int main() {
	UniquePtr<int> p1(new int);
	UniquePtr<int[]> p2(new int[10]); 
/*
	p2[0] = 10;
	p2[1] = 20;*/

	//p2[0] = 10; // 1 ok
	//p1[0] = 10; // 2 error

	//*p2 = 10; // 3 error
	//*p1 = 10; // 4 ok
	
	UniquePtr<int, Freer> p3((int*)malloc(100));

}