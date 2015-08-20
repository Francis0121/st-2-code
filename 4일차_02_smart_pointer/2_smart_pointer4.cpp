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
	Ptr(T* p = 0) : obj(p) {
		ref = new int(1);
	}
	Ptr(const Ptr& p) {
		obj = p.obj;
		ref = p.ref;
		++(*ref);
	}

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
};

int main() {
	Ptr<Dog> p1 = new Dog;
	Ptr<Animal> p2 = p1; 
}