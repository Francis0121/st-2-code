#include <iostream>
using namespace std;

class Cat {
	char* name;
	int age;
public:
	
Cat(const char* n, int a) : age(a) {
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}

	~Cat() { delete[] name; }

	Cat(const Cat&c) {
		// 깊은복사(Deep Copy)를 사용한 복사 생성자
		// 1. 포인터가 아닌 멤버는 그냥 복사
		age = c.age;
	 
		// 2. 포인터 멤버는 메모리 핧 당후 
		name = new char[strlen(c.name) + 1];

		// 3. 메모리를 통째로 복사
		strcpy(name, c.name);
	}
};

int main() {
	Cat c1("NABI", 2);
	Cat c2(c1); 
}

