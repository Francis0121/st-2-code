#include <iostream>
using namespace std;

// operator new는 재정의(overloading)할 수 있습니다.

void* operator new(size_t sz){
	cout << "my new" << endl;	
	return malloc(sz);
}

// Function Overloading이 가능하다. 단, 1번째 인자는 반드시 size_t이어야 한다.
void* operator new(size_t sz, char* s, int n){
	cout << "my new 2" << endl;
	return malloc(sz);
}

void operator delete(void *p) {
	cout << "my delete" << endl;
	free(p);
}

int main() {
	int *p1 = new int; // sizeof(int) 즉 "4"가 인자로 전달됨.
	int *p2 = new("AAA", 3) int; //Funcation Overloading operator new 인자로 넘기는 방법

	delete p1;
	delete p2;
}