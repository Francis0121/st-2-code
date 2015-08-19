// 3 ���� ���� 2
#include <iostream>
using namespace std;

// �޸� �Ҵ� ���� ��å�� ���� ��å Ŭ����
template<typename T> class xallocator {
public:
	T* allocate(int sz) {
		return new T[sz];
	}
	void deallocate(T* p) {
		delete[] p;
	}
};

template<typename T, typename Alloc = xallocator<T>> class Vector {
	Alloc alloc; // ���� ������ ��� �Ǵ� �������� ����ص� �˴ϴ�.
public:
	void resize(int sz) {
		// �޸𸮰� �����ؼ� �޸� �Ҵ��� �ؾ� �մϴ�.
		// malloc ? new ? pool ? system call?
		T* p = alloc.allocate(sz);
		
		// �޸� ����
		alloc.deallocate(p);
	}
};

int main() {
	Vector<int, xallocator<int>> v;
}