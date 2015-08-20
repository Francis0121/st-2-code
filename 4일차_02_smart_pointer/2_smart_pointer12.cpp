#include <iostream>
using namespace std;

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

	T* operator->() {
		return obj;
	}
	T& operator*() {
		return *obj;
	}
};

template<typename T>
class LightRefBase {
	int mCount;
public:
	inline LightRefBase() : mCount(0) {
	}
	inline ~LightRefBase() {
	}
	inline void incStrong() {
		++mCount;
	}
	inline void decStrong() {
		if (--mCount == 0) {
			delete static_cast<T*>(this);
		}
	}
};

class Truck : public LightRefBase<Truck> {
public:
	~Truck() {
		cout << "~Trunk" << endl;
	}
};

int main() {
	sp<Truck> p = new Truck;
}