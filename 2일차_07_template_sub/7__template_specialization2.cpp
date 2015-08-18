// 7 ���ø� �κ� ����ȭ 2

#include <iostream>
using namespace std;

// template meta programming : ������ �ÿ� ������ �����ϴ� ��

// ������ �ð� ��͸� Ȱ���Ѵ�.
// ����� ���Ḧ ���ؼ� ����ȭ ������ Ȱ��ȴ�.
// ��Ÿ �Լ���� �θ���.

// template ���ڷ� Ÿ���� �ƴ� ������ ������ �˴ϴ�.
template<int N> struct Factorial {
	enum {
		value = N * Factorial<N - 1>::value;
	};
};

template<> struct Factorial<1> {
	enum {
		value = 1
	};
};


int main() {
	int n = Factorial<5>::value;
			// 5 * F<4>::v
			// 5 * 4 * F<3>::v
			// 5 * 4 * 3 * F<2>::v 
			// 5 * 4 * 3 * 2 * F<1>::v
			// 5 * 4 * 3 * 2 * 1

			// compile -> 120���� ������.( Runtime ����ð� �ƴ϶� Compile ��) -> ���� ���� �ڵ忡 120�� �����ȴ�.
	cout << n << endl;
}