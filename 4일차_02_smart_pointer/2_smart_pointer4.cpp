#include <iostream>
using namespace std;

class Animal {

};

class Dog : public Animal {

};

template <typename T>
class Ptr {
	T* obj;
	int* ref;
public:
	// 변환생성자를 막기 위한 방법으로 다음을 수행
	explicit Ptr(T* p = 0) : obj(p) {
		ref = new int(1);
	}
	// 일반 복사 생성자
	Ptr(const Ptr& p) {
		obj = p.obj;
		ref = p.ref;
		++(*ref);
	}
	// 일반화된 복사 생성자 - 2일차 2교시 참고.
	template<typename U> Ptr(const Ptr<U>& p) {
		obj = p.obj;
		ref = p.ref;
		++(*ref);
	}

	template<typename> friend class Ptr;

	~Ptr() {
		if (--(*ref) == 0) {
			delete obj;
			delete ref;
		}
	}

	T* operator->() {
		return obj;
	}

	T& operator*() {
		return *obj;
	}

	// 그외 대입연산자(=), ==, != 연산자가 template 버전으로 있어야 한다.
};

int main() {
	Ptr<Dog> p1(new Dog);
	Ptr<Animal> p2 = p1; // 다형성 : 부모 포인터로 자식을 가리킬 수 있어야 한다.
}