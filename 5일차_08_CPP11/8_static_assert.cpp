// static_assert
#include <iostream>
using namespace std;

void foo(int age) {
	char *p = new char[age];
}

int main() {
	foo(-10);
}