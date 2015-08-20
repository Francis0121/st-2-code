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
	// ��ȯ�����ڸ� ���� ���� ������� ������ ����
	explicit Ptr(T* p = 0) : obj(p) {
		ref = new int(1);
	}
	// �Ϲ� ���� ������
	Ptr(const Ptr& p) {
		obj = p.obj;
		ref = p.ref;
		++(*ref);
	}
	// �Ϲ�ȭ�� ���� ������ - 2���� 2���� ����.
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

	// �׿� ���Կ�����(=), ==, != �����ڰ� template �������� �־�� �Ѵ�.
};

int main() {
	Ptr<Dog> p1(new Dog);
	Ptr<Animal> p2 = p1; // ������ : �θ� �����ͷ� �ڽ��� ����ų �� �־�� �Ѵ�.
}