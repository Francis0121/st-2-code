#include <iostream>
using namespace std;

// operator new�� ������(overloading)�� �� �ֽ��ϴ�.

void* operator new(size_t sz){
	cout << "my new" << endl;	
	return malloc(sz);
}

void operator delete(void *p) {
	cout << "my delete" << endl;
	free(p);
}

int main() {
	int *p1 = new int; // sizeof(int) �� "4"�� ���ڷ� ���޵�.
	delete p1;
}