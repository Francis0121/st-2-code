#include <iostream>
using namespace std;

class Animal {};

class Dog : public Animal {
public:
	int color;
};

//-------------------------
// 모든 동물에 공통의 기능만 수행한다면 부모인 Animal*르 인자로
// void foo(Dog* p) {
void foo(Animal* p) {
	// 모든 동물의 공통 기능 수행 후 
	// dog라면 색상도 변경.
	// p->color = 10; // p가 Animal* 이므로 color는 없다.

	// 다운(Down) 캐스트 : 부모 포인터 => 자식 포인터로 변경하는 것.
	Dog *pDog = static_cast<Dog*>(p);
	pDog->color = 10;
}

int main() {
	Dog d;
	foo(&d);
}