// 1_template_basic3.cpp
#include <stdio.h>

// square : �Լ��� ����� Ʋ(template)
// square<int> : �Լ� !

template<typename T> T square(T a) {
	return a * a;
}

int main() {
	// printf("%p\n", &square); // �ɱ��? �� �����غ�����
	// square�� ���� �Լ��� �ƴϴ� Ʋ�̴�
	printf("%p\n", &square<int>); // square�� int �ּҴ� �����.
}
