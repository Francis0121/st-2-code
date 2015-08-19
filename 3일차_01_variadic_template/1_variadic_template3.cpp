
#include <iostream>
using namespace std;

template<typename T, typename ... Types>
class xtuple : public xtuple<Types...> {
public:
	T value;

	xtuple() {

	}

	xtuple(const T& a, Types ... args) : value(a), xtuple<Types...>(args...) {}

	enum {
		N = 1 + xtuple<Types...>::N
	};
};

template<typename T> class xtuple<T> {
public:
	T value;

	xtuple() {

	}

	xtuple(const T& a) : value(a) {

	}

	enum {
		N = 1
	};
};

template<typename T> int xtuple_size(T& a) {
	return T::N;
}

// xtuple의 가진 N번째 요소의 타입을 알아내는 기술 - 어렵습니다.
template<int N, typename T, typename ... Types>
struct xtuple_type{

};

// 0 번째 타입을 요구할때를 위한 부분 전문화
template<int N, typename T, typename ... Types>
struct xtuple_type<0, x_tuple<T, Types...>> {

};

int main() {
	xtuple<int, char, double, short> t4(1, 'c', 3.3, 4);
}