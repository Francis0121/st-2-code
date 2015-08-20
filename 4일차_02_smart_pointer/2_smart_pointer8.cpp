#include <iostream>
using namespace std;

class RefBase {
	int mCount; 
public:
	RefBase() : mCount(0) {
	}
	virtual	~RefBase() {
	}
	void incStrong() {
		++mCount;
	}
	void decStrong() {
		if (--mCount == 0) {
			delete this;
		}
	}
};

// 객체 안에 참조 계수를 자동으로 관리해주는 스마트 포인터
template<typename T> class sp {
	T* obj;
public:
	sp(T* p = 0) : obj(p) {
		if (obj)
			obj->incStrong();
	}
	sp(const T& p) : obj(p.obj) {
		if (obj)
			obj->incStrong();
	}
	~sp() {
		if (obj)
			obj->decStrong();
	}

	// 스마트 포인터의 기본 -> 와 *
	T* operator->() {
		return obj;
	}
	T& operator*() {
		return *obj;
	}
};

// sp를 사용하려면 반드시 incStrong()와 decStrong()이 있어야 한다.
class Trunk : public RefBase{
public:
	~Trunk() {
		cout << "~Trunk" << endl;
	}
};

int main() {
	sp<Trunk> p = new Trunk;
}