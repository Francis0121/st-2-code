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
		// ��������(Deep Copy)�� ����� ���� ������
		// 1. �����Ͱ� �ƴ� ����� �׳� ����
		age = c.age;
	 
		// 2. ������ ����� �޸� �C ���� 
		name = new char[strlen(c.name) + 1];

		// 3. �޸𸮸� ��°�� ����
		strcpy(name, c.name);
	}
};

int main() {
	Cat c1("NABI", 2);
	Cat c2(c1); 
}

