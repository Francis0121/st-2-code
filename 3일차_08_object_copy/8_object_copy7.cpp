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
	void foo() {
		Cat c1("A", 2);
		Cat c2 = c1; // 이것도 막고싶다.
					// 구현이 없음으로 link 에러!
	}
private:
	// private 복사 생성자 : 복사를 글지하고 싶을떄 사용하는 기술
	Cat(const Cat& c); // 핵심 .. 선언만 한다.
	Cat& operator=(const Cat& c);
};

int main() {
	Cat c1("NABI", 2);
	//Cat c2 = c1; // 복사를 름지하자.. 컴파일 시간에러가 나오게 해보자.
}