#include <iostream>
using namespace std;

// operator new는 재정의(overloading)할 수 있습니다.

void* operator new(size_t sz){
	cout << "my new" << endl;	
	return malloc(sz);
}

void operator delete(void *p) {
	cout << "my delete" << endl;
	free(p);
}

int main() {
	int *p1 = new int; // sizeof(int) 즉 "4"가 인자로 전달됨.
	delete p1;
}