#include <iostream>
#include <type_traits>
using namespace std;

void foo() {
	static_assert(sizeof(double) > sizeof(8), "double�� 8���� Ŀ�� �������� �˴ϴ�.");
}


// Packet ũ���?
// ����ü�� padding�� �ִٸ� �������� ���߰��غ���

struct Packet {
	char cmd;
	int dat;
};

// Pacaket ũ���?
// ���Ǥ�ü�� padding �� �ִٸ� �������� ���߰� �غ���
static_assert(sizeof(Packet) != sizeof(char) + sizeof(int),  "unexpected padding");

class Test {
	int data;
public :
	virtual void foo(){}
};

template <typename T> void foo(T a) {
	static_assert(is_polymorphic]<T>::value, "T has virautl funciton);
	T tmp;
	memset(&tno, 0, sizeof(T));
}

int main() {
	foo();
}