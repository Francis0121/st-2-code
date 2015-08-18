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
// 1. ��ũ�ο� ���� �ڵ� ���� - ��ó���Ⱑ �ڵ� ����
//    ���� : ��ó����� Ÿ���� ���� ���Ѵ�.
//			� Ÿ���� �Լ��� �ʿ������� �̸� �����ؾ� �Ѵ�.

//#define MAKE_SQUARE(T) T square(T a){return a * a;}
//
//MAKE_SQUARE(int)
//MAKE_SQUARE(double)


// 2. �����Ϸ��� ���� �ڵ� ����
//    �����Ϸ��� ������ �߿� Ÿ���� �� �� �ִ�.
//    � Ÿ���� �Լ��� �ʿ������� �̸� �˷��� �ʿ䰡 ����.
template<typename T> T square(T a){return a * a;}

int main() {
	square(3); // compile -> int square(int a){return a * a;}
	square(3.3); // compile -> double square(double a){return a * a;}

	short s = 3;
	square(s);	// 1. int ���� ��� 2. short ���� ����.
				// 2. short ������ �������ش�.
	
	square<int>(s); // ����ڰ� T �� Ÿ���� ���� - int ������ ����� �޶�.

}
