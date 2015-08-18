#include <iostream>
using namespace std;

// C++ ǥ������ȸ�� int2type�� �������Ѽ� �Ʒ� ���ø��� �����մϴ�
// ������ ���� ������ �����ϴ�.
//template<typename T, T N> struct integral_constant {
//	// enum { value = N };
//	static const T value = N; // static const �� Ŭ���� �ȿ��� �ٷ� �ʱ�ȭ �����մϴ�. 2000�� �ʹݿ� �߰��� ����
//							// �׷��� ���� enum ��� ����մϴ�.
//};

//integral_constant<int, 0> n0;
//integral_constant<short, 0> s0;

// true/false : �� ������ ��Ÿ���� �� - ���� Ÿ��
// true_type/false_type : �� ������ ��Ÿ���� Ÿ�� - �ٸ� Ÿ��
//typedef integral_constant<bool, true> true_type;
//typedef integral_constant<bool, false> false_type;

// ���� is_pointer ���� ���� �� �Ʒ� ó�� �մϴ�.
// ����� ������ �߰��ǰ�, value�� �θ�� ���� ���� �޽��ϴ�.
//template<typename T> struct is_pointer : false_type{};
//template<typename T> struct is_pointer<T*> : true_type{};

#include <type_traits> // �� �ȿ� ���� �ִ� template �� �ֽ��ϴ�.

// �������� ��츦 ó���ϴ� �Լ�
template<typename T> void printv_imp(T a, true_type) {
	cout << a << " " << *a << endl;
}

// �����Ͱ� �ƴ� ���
// �Ķ���� �����̸��� ������ �Ǹ� ����ȭ�� �Ⱦ��� ������ �Ǵ��Ͽ� ����ȭ�� �˾Ƽ� ���ش�.
template<typename T> void printv_imp(T a, false_type) {
	cout << a << endl;
}

template<typename T> void printv(T a) {
	// � ����ü�� Ŭ������ ()�� ���̸� �ӽð�ü�� �������ش�.
	printv_imp(a, is_pointer<T>());
}

int main() {
	int n = 3;
	printv(&n);
	printv(n);
}
