// 3 ���� ���� 2
#include <iostream>
using namespace std;

// �޸� �Ҵ� ���� ��å�� ���� ��å Ŭ����
template<typename T> class allocator {
public:
	T* allocate(int sz) {
		return new T[sz];
	}
	void deallocate(T* p) {
		delete[] p;
	}
};

template<typename T> class Vector {
public:
	void resize(int sz) {
		// �޸𸮰� �����ؼ� �޸� �Ҵ��� �ؾ� �մϴ�.
		// malloc ? new ? pool ? system call?
	}
};