#include <iostream>
using namespace std;

// 참조계수를 객체안에 포함시키자.
class Car {
	// Car의 고유멤버들...
	int mCount; // 참조계수

public:
	Car() : mCount(0) {

	}
	~Car() {
		cout << "~Car" << endl;
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
		if(obj)
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

int main() {
	sp<Car> p1 = new Car;
	sp<Car> p2 = p1;
}