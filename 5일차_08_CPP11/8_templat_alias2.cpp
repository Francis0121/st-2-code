// 6 template_alias
#include <type_traits>
using namespace std;

// const�� ������ Ÿ���� ���ϴ� traits
template<typename T>
struct xremove_const {
	typedef T type;
};

template<typename T> void foo(T& a) {
	// T���� const�� ������ Ÿ���� ���ϴ� ���
	xremove_const<T>::type n;
}

int main() {
	const int c = 0;
	foo(c);
}