//6_begin_end
#include <iostream>
#include <vector>
#include <type_traits>
using namespace std;

// �����̳��� ��� ��Ҹ� ȭ�鿡 ����ϴ� �Լ�.
//template<typename T> void showImp(T& c, false_type) {
//	typename T::iterator p = c.begin();
//
//	while (p != c.end()) {
//		cout << *p << " ";
//		++p;
//	}
//	cout << endl;
//}
//
//// �迭�϶�
//template<typename T> void showImp(T& c, true_type) {
//	auto p = c; // �迭�� �̸��� ���� �ּ��̴�.
//
//	while (p != c + extent<T, 0>::value) {
//		cout << *p << " ";
//		++p;
//	}
//	cout << endl;
//}

//template<typename T> void show(T& c) {
//	showImp(c, is_array<T>());
//}


// ���� ��Ÿ��
// 1. �迭���� begin()/end() �� ����
// 2. �׷��� �迭������ �Լ��� ���� ����
// 3. show������ is_arry<>�� ����ؼ� �Լ� �����ε����� �ذ�

// C++ 11 ���ο� ��Ÿ��

//template<typename T> auto begin(T& c) { return c.begin(); }
//template<typename T> auto end(T& c) { return c.end(); }
//
//// �迭����
//template<typename T, int N>
//auto begin( T(&arr)[N]) { return N; }
//
//template<typename T, int N>
//auto end(T(&arr)[N]) { return arr + N; }
//
template<typename T> void show(T& c) {
	auto p = begin(c);

	while (p != end(c)) {
		cout << *p << " ";
		++p;
	}
	cout << endl;
}

int main() {
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	vector<int> v(x, x + 10);

	show(v);
	show(x);
}