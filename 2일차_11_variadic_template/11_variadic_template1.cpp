// 11_�������� ���ø�
#include <iostream>
using namespace std;

template<typename ... Types> void goo(Types ... args) {
	cout << "goo" << endl;
}

template<typename ... Types> void foo(Types ... args) {

}

int main() {
	foo(1, 3.3, 'a');
}