// 4 ���� ���� smart Pointer

#include <iostream>
using namespace std;

// 1. Template���� �������Ѵ�.

// 2. �������� ������ �ذ��ؾ� �Ѵ�.
//		A. �������� - ����Ʈ ������ ���鶧�� ���� ������� �ʴ´�.
//		B. ������� - ����Ʈ ������ ���鶧 "����" �θ� ���̴� ���
//		C. ���������� - ?
//		D. ������� - ���� �߰� �ִ� ���. ( �� �� �� �� )
//			���� �ڿ� ���� �������θ� ���ȴٸ�
//			������� ��� ���� ���� ���� ����� ����Ʈ �����Ͱ� ����.		
//
//			���� : ��� �Լ��� inline ġȯ�ȴ�.
//			��������� ���� ��� �޸𸮵� �ʿ����.
//			����Ʈ ������ ���Կ� ���� ������尡 ���� ����.
//			C++ ǥ���� unique_ptr<> Ŭ������ �� ���.

template <typename T>
class Ptr {
	T* obj;
	
	// �ܼ��� �ڿ����� �뵵�θ� ����Ҷ���
	// ��������� ������尡 �ִ�.
	// �ڿ� ���� ���� ����Ʈ �����͵� �������� = ���� ����
	Ptr(const Ptr&) = delete;
	Ptr& operator=(const Ptr& p) = delete;

public:
	inline Ptr(T* p = 0) : obj(p) {

	}
	inline ~Ptr() {
		delete obj;
	}

	inline T* operator->() {
		return obj;
	}

	inline T& operator*() {
		return *obj;
	}
};

int main() {
	Ptr<int> p1 = new int;
//	Ptr<int> p2 = p1;
}