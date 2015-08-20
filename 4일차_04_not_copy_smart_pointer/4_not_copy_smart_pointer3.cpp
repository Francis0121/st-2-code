// 4 ���� ���� smart Pointer
#include <iostream>
using namespace std;

struct Freer {
	inline void operator()(void* p) const {
		cout << "free ���" << endl;
		free(p);
	}
};

template<typename T>
struct DefaultDelete {
	inline void operator()(T* p) const {
		cout << "delete ���" << endl;
		delete p;
	}
};

// �迭 delete�� ���� �κ� ����ȭ ����
template<typename T>
struct DefaultDelete<T[]> {
	inline void operator()(T* p) const {
		cout << "delete[]���" << endl;
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
	UniquePtr<int[]> p4(new int[10]); // ���ڵ�� ���� UniquePtr���� int* obj; �ڵ�� �����˴ϴ�. int[]* �� �߸��� ǥ���Դϴ�. �׷��� error.
}