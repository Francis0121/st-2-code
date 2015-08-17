#include <iostream>
using namespace std;

// operator new�� ������(overloading)�� �� �ֽ��ϴ�.

void* operator new(size_t sz){
	cout << "my new" << endl;	
	return malloc(sz);
}

// Function Overloading�� �����ϴ�. ��, 1��° ���ڴ� �ݵ�� size_t�̾�� �Ѵ�.
void* operator new(size_t sz, char* s, int n){
	cout << "my new 2" << endl;
	return malloc(sz);
}

void operator delete(void *p) {
	cout << "my delete" << endl;
	free(p);
}

int main() {
	int *p1 = new int; // sizeof(int) �� "4"�� ���ڷ� ���޵�.
	int *p2 = new("AAA", 3) int; //Funcation Overloading operator new ���ڷ� �ѱ�� ���

	delete p1;
	delete p2;
}