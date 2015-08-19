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

	// C++98 : ������, ���� ������
	// C++11 : ������, ���� ������, Move ������

	// ���� ������ - ���� ��İ� ��� ����
	Cat(const Cat& c) { 		
		// ���� ���糪 �������������� ����.
		cout << " ���� ������" << endl;
	}

	// Move ������ - rvalue refernece�� ����ϱ�� �����ߴ�.
	Cat(Cat&& c) {
		cout << "Move ������ ȣ��" << endl;
		// ������ �������� ����
		// 1. ���� �����Ŀ�
		name = c.name;
		age = c.age;

		// 2. ������ 0����
		c.name = 0;
		c.age = 0;
	}
};

int main() {
	Cat c1("NABI", 2);
	Cat c2(c1);
}
