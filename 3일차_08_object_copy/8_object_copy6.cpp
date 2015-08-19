// 8_��ü����6
#include <iostream>
using namespace std;

class Cat {
public:
	Cat() {
		cout << "������" << endl;
	}
	// C++11 �� �� -> �Ҹ���, ���� ������, ���� ���Կ����� -> Rule of 3
	// C++11 �� �� -> Move ������, Move ���Կ����� -> Rule of 5
	~Cat() {
		cout << "�Ҹ���" << endl;
	}
	Cat(const Cat&) {
		cout << "���� ������" << endl;
	}
	Cat& operator=(const Cat&) {
		cout << "���� ���Կ�����" << endl;
		return *this;
	}
	Cat(Cat&&) {
		cout << "Move ������" << endl;
	}
	Cat& operator=(Cat&&) {
		cout << "Move ���Կ�����" << endl;
		return *this;
	}
};

template<typename T> void Swap(T& a, T& b) {
	T tmp = move(a);
	a = move(b);
	b = move(tmp);
}

int main() {
	Cat c1;
	Cat c2;
	Swap(c1, c2);
}