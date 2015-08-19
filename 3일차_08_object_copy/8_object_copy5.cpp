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

	Cat(Cat&c) {
		name = c.name;
		age = c.age;

		c.name = 0;
		c.age = 0;
	}
};

int main() {
	Cat c1("NABI", 2);
	Cat c2(c1);
}
