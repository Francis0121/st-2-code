// 6 template_alias
#include <type_traits>
using namespace std;

// const�� ������ Ÿ���� ���ϴ� traits
template<typename T>
struct xremove_const {
	typedef T type;
};

template<typename T>
struct xremove_const<const T> {
	typedef T type;
};

// ��ó�� traits�� ����� ����
// using���� ��뤩�ϱ� ���� ���ָ� �˴ϴ�.
template <typename T>
using xremove_const_t = typename xremove_const<T>::type;

template<typename T> void foo(T& a) {
	// T���� const�� ������ Ÿ���� ���ϴ� ���
 	// typename xremove_const<T>::type n; C++ 11 style

	//xremove_const_t<T> n; // ���� ������ ǥ���̴�. C++14 style
	remove_const_t<T> n; // C++14
}

int main() {
	const int c = 0;
	foo(c);
}