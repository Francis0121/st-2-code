// 4 복사 금지 smart Pointer

#include <iostream>
using namespace std;

template <typename T>
class UniquePtr {
	T* obj;
	UniquePtr(const UniquePtr&) = delete;
	UniquePtr& operator=(const UniquePtr& p) = delete;

public:
	inline UniquePtr(T* p = 0) : obj(p) {

	}
	inline ~UniquePtr() {
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
	UniquePtr<int> p1 = new int;
}