#include <iostream>
using namespace std;

// 1. Template���� �������Ѵ�.

// 2. �������� ������ �ذ��ؾ� �Ѵ�.
//		A. �������� - ����Ʈ ������ ���鶧�� ���� ������� �ʴ´�.
//		B. ������� - ����Ʈ ������ ���鶧 "����" �θ� ���̴� ���
//		C. ���������� - ???
//		D. ������� - ���� �߰� �ִ� ���. ( �� �� �� �� )

template <typename T>
class Ptr {
	T* obj;
public:
	Ptr(T* p = 0) : obj(p) {

	}
	~Ptr() {
		delete obj;
	}

	T* operator->() {
		return obj;
	}

	T& operator*() {
		return *obj;
	}
};

int main() {
	Ptr<int> p1 = new int;
	Ptr<int> p2 = p1;
}