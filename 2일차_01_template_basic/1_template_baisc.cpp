// Template_basic

// �Լ� �����ε�
// �Լ� ����� : �ϳ��� �Լ� ó�� ���δ�.
// �Լ� ������ : 2���� �Լ��� ������ �Ѵ�.

//int square(int a) {
//	return a * a;
//}
//
//double square(double a) {
//	return a * a;
//}

// ������ �ڵ尡 �ݺ��Ǹ� �ڵ�����⸦ �������.
// 1. ��ũ�ο� ���� �ڵ� ����
#define MAKE_SQUARE(T) T square(T a){return a * a;}

MAKE_SQUARE(int)
MAKE_SQUARE(double)

int main() {
	square(3);
	square(3.3);
}