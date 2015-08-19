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
		// ���� ��� ����� �Ҹ���
		if (--(*ref) == 0) {
			delete[] name;
			delete ref;
		}
	}

	// ���� ����� ������ ���� ������
	Cat(const Cat&c) {
		// 1. ��� ����� ���� ���� �Ŀ�
		name = c.name;
		age = c.age;
		ref = c.ref;

		// 2. ������� ����
		++(*ref);
	}
};

int main() {
	Cat c1("NABI", 2);
	Cat c2(c1); 
}