
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

// xtuple�� ���� N��° ����� Ÿ���� �˾Ƴ��� ��� - ��ƽ��ϴ�.
template<int N, typename T, typename ... Types>
struct xtuple_type{

};

// 0 ��° Ÿ���� �䱸�Ҷ��� ���� �κ� ����ȭ
template<int N, typename T, typename ... Types>
struct xtuple_type<0, x_tuple<T, Types...>> {

};

int main() {
	xtuple<int, char, double, short> t4(1, 'c', 3.3, 4);
}