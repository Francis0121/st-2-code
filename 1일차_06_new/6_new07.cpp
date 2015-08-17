// 6_new07
#include <iostream>
using namespace std;

// ~ Exception �����ϵ��� overloading
void* operator new(size_t sz){
	void *p = malloc(sz);
	if (p == 0) {
		throw std::bad_alloc(); // ��������.
	}
	return p;
}

// ����, ������ �ʰ� �Լ� ȣ���ε��� ���� ���ڰ� �ʿ��� ��
// ���ο� Ÿ���� �����ϴ� ���� ����. - "empty class" ����
 
struct nothrow_type {}; // empty class - �ƹ� ����� ����.
nothrow_type nothrow_val; // sizeof(nothrow) => 1byte �Դϴ�.

// ~ 0�� �����ϵ��� overloading
void* operator new(size_t sz, nothrow_type n){
	void *p = malloc(sz);
	return p;
}

int main() {
	int* p = new(nothrow_val) int[100];
}
