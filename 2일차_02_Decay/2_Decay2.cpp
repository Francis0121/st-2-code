// 2_Decay2.cpp

// ���ڿ� �����ͷ� �ޱ� ������  (T - ��������) ������ ������ �ʴ´�.
//template<typename T> void foo(T a, T b) {
//	
//}
//
//int main() {
//	foo("orange", "apple");
//}




// ���ڿ��� �ޱ� ������  (T - �迭 �������� ũ�Ⱑ 5,6) ������ �߻��Ѵ�.
//template<typename T> void foo(T& a, T& b) {
//
//}
//
//int main() {
//	foo("orange", "apple");
//}



// T&���� ���� �� ���ڿ��� ���� �� ȥ�������� �� �� �ִ�.
// �� ���� ���ڿ� ���� ������ ����� �ȴ�.
// �Լ� ã�� ����.
// 1. ��Ȯ�� Ÿ�� : ���ڿ� �迭 ������ �Լ�.
// 2. ��ȯ ������ Ÿ�� : ���ڿ� ������ ������ �Լ�.
// 3. template ���
// 4. �������� ���.
// 5. error

template<typename T> void foo(T& a, T& b) {

}

void foo(char* s1, char* s2) { // 2���� ã�� �ȴ�.

}

int main() {
	foo("orange", "apple");
}