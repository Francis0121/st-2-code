#include <iostream>
using namespace std;

class Cat {
	char* name;
	int age;
	int* ref; 

public:
	Cat(const char* n, int a) : age(a) {
		name = new char[strlen(n) + 1];
		strcpy(name, n);
		ref = new int(1);
	}
	~Cat() { 
		// 참고 계수 방식의 소멸자
		if (--(*ref) == 0) {
			delete[] name;
			delete ref;
		}
	}

	// 참조 계수로 구현한 복사 생성자
	Cat(const Cat&c) {
		// 1. 모든 멤버를 얕은 복사 후에
		name = c.name;
		age = c.age;
		ref = c.ref;

		// 2. 참조계수 증가
		++(*ref);
	}
};

int main() {
	Cat c1("NABI", 2);
	Cat c2(c1); 
}