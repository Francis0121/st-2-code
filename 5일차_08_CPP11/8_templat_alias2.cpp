// 6 template_alias
#include <type_traits>
using namespace std;

// const를 제거한 타입을 구하는 traits
template<typename T>
struct xremove_const {
	typedef T type;
};

template<typename T> void foo(T& a) {
	// T에서 const를 제거한 타입을 구하는 방법
	xremove_const<T>::type n;
}

int main() {
	const int c = 0;
	foo(c);
}