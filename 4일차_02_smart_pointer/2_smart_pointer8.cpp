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

// ��ü �ȿ� ���� ����� �ڵ����� �������ִ� ����Ʈ ������
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

	// ����Ʈ �������� �⺻ -> �� *
	T* operator->() {
		return obj;
	}
	T& operator*() {
		return *obj;
	}
};

// sp�� ����Ϸ��� �ݵ�� incStrong()�� decStrong()�� �־�� �Ѵ�.
class Trunk : public RefBase{
public:
	~Trunk() {
		cout << "~Trunk" << endl;
	}
};

int main() {
	sp<Trunk> p = new Trunk;
}