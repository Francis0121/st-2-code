#include <iostream>
using namespace std;

// �������� ���ø�. - ��++ 11 ���
template<typename ... Types>
void foo(Types ... args) {

}

int main() {
	foo(1);
	foo(1, 3.3); // Types -> int, double
}