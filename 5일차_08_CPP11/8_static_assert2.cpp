#include <iostream>
#include <type_traits>
using namespace std;

void foo() {
	static_assert(sizeof(double) > sizeof(8), "double이 8보다 커야 컴파일이 됩니다.");
}


// Packet 크기는?
// 구조체가 padding이 있다면 컴파일을 멈추게해보자

struct Packet {
	char cmd;
	int dat;
};

// Pacaket 크기느?
// 구ㅗㅈ체가 padding 이 있다면 컴파일을 멈추게 해보자
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