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
	T* obj; // int -> int* obj ... int[] -> int[]* obj
	UniquePtr(const UniquePtr&) = delete;
	UniquePtr& operator=(const UniquePtr& p) = delete;

public:
	inline explicit UniquePtr(T* p = 0) : obj(p) {

	}
	inline ~UniquePtr() {\
		D()(obj);
	}

	inline T* operator->() {
		return obj;
	}

	inline T& operator*() {
		return *obj;
	}
};

int main() {
	UniquePtr<int> p3(new int);
	UniquePtr<int[]> p4(new int[10]); // 이코드는 위의 UniquePtr에서 int* obj; 코드로 생성됩니다. int[]* 는 잘못된 표현입니다. 그래서 error.
}