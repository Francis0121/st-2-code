#include <iostream>
using namespace std;

class Animal {};

class Dog : public Animal {
public:
	int color;
};

//-------------------------
// ��� ������ ������ ��ɸ� �����Ѵٸ� �θ��� Animal*�� ���ڷ�
// void foo(Dog* p) {
void foo(Animal* p) {
	// ��� ������ ���� ��� ���� �� 
	// dog��� ���� ����.
	// p->color = 10; // p�� Animal* �̹Ƿ� color�� ����.

	// �ٿ�(Down) ĳ��Ʈ : �θ� ������ => �ڽ� �����ͷ� �����ϴ� ��.
	Dog *pDog = static_cast<Dog*>(p);
	pDog->color = 10;
}

int main() {
	Dog d;
	foo(&d);
}