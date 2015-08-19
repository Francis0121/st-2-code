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
	
	// private ���� ������ : ���縦 �����ϰ� ������ ����ϴ� ���
	//Cat(const Cat& c); // �ٽ� .. ���� �Ѵ�.
	//Cat& operator=(const Cat& c);

	// C++ 11 �� �������� ����ȭ �մϴ�.
	Cat(const Cat&) = delete;// ��������ڸ� �����޶�
	Cat& operator=(const Cat&) = delete;
};

int main() {
	Cat c1("NABI", 2);
	//Cat c2 = c1; // ���縦 ��������.. ������ �ð������� ������ �غ���.
}