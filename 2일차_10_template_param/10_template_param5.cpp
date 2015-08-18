#include <iostream>
using namespace std;

// 가변인자 템플릿. - ㅊ++ 11 기술
template<typename ... Types>
void foo(Types ... args) {

}

int main() {
	foo(1);
	foo(1, 3.3); // Types -> int, double
}