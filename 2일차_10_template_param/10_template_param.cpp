// 10 ���ø� ����

// 1. type
// 2. ������ ���(���� �ȵ�. �Ǽ� �ȵ�)

template<typename T = int, int N = 10> struct stack { // Default Parameter �� �ȴ�.
// template<typename T, int N> struct stack {
	T buff[N];
};

int main() {
	stack<int, 10> s1;

	//int n = 10;
	//stack<int, n> s2;// error. ������ �ð� ����� �����ϴ�.

	stack<int> s3; // N�� 10
	stack<> s4; // ��� ���ڸ� default ������ ���ڴ�.
}