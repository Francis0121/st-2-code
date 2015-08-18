// 7 ���ø� �κ� ����ȭ3
#include <iostream>
using namespace std;


template<typename T> void print(const T& d) {
	cout << T::N << endl;
}

// Duo�� ������ type�� ������ ������ ���� �� �ִ�
template<typename T, typename U> struct Duo {
	T value1;
	U value2;

	enum { N = 2 };
};

// Duo�� 2���� ���ڰ� �ٽ� Duo�϶� (Recursive)�� ���� �κ� ����ȭ
// �κ� ����ȭ �� �� ���ø� ���� ������ �ٲ� �˴ϴ�.
template<typename A, typename B, typename C> 
struct Duo<A, Duo<B, C>> {
	A value1;
	Duo<B,C> value2;

	enum { N = Duo<B,C>::N + 1 };
};

template<typename A, typename B, typename C>
struct Duo<Duo<B, C>, A> {
	A value1;
	Duo<B, C> value2;

	enum { N = Duo<B, C>::N + 1 };
};

template<typename A, typename B, typename C, typename D>
struct Duo<Duo<A, B>, Duo<C, D>> {
	Duo<A, B> value1;
	Duo<C, D> value2;

	enum { N = Duo<A, B>::N + Duo<C, D>::N};
};

int main() {
	Duo<Duo<int, int>, Duo<int, int>> d4;
	print(d4);
}

//int main() {
//	Duo<Duo<int, int>, int> d3;
//	Duo<Duo<Duo<int, int>, int>, int> d4;
//
//	print(d3);
//	print(d4);
//}

//int main() {
//	Duo<int, int> d2; // 2��..
//	Duo<int, Duo<int, int>> d3; // 3��...
//	Duo<int, Duo<int, Duo<int, int>>> d4; // 4�� ...
//	print(d2); // 2
//	print(d3); // 3
//	print(d4); // 4
//}

//typedef Duo<int, int> Point;