// 1_template_basic3.cpp
#include <stdio.h>

// square : 함수를 만드는 틀(template)
// square<int> : 함수 !

template<typename T> T square(T a) {
	return a * a;
}

int main() {
	// printf("%p\n", &square); // 될까요? 잘 생각해보세요
	// square는 아직 함수가 아니다 틀이다
	printf("%p\n", &square<int>); // square의 int 주소는 여기다.
}
