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

// ��������� �����ϴ� �Լ��� �ݵ�� ��� �Լ� �̾�� �Ѵ�.
template<typename T>
class LightRefBase {
	mutable int mCount;
public:
	inline LightRefBase() : mCount(0) {
	}
	inline ~LightRefBase() {
	}
	inline void incStrong() const {
		++mCount;
	}
	inline void decStrong() const {//decStrong (const LightRefBase* this)
		// this : const RefBase* �Դϴ�.
		// static cast�� ������� ������ �� �����ϴ�.

		// RefBase*			=> T*		: ok!!
		// const RefBase*	=> const T*	: ok!!
		// const RefBase*	=> T*		:error
		if (--mCount == 0) {
			delete static_cast<const T*>(this);
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
	//const Truck t;
	//t.incStrong(); // ��� ��ü�� ���� ��� ������ �� �� �־�� �Ѵ�.
}