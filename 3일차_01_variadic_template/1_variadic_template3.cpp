
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
// �ᱹ �Ʒ��� primary ������ ������ �ʰ�... �κ� ����ȭ ������ ����ϰ� �˴ϴ�.
// �� ���� ����ü ��ü ({}) ���� ��� �־ �˴ϴ�.
// ��, ���� ��ü�� �� �־�� �κ� ����ȭ ������ ���� �� �ֽ��ϴ�.
template<int N, typename T, typename ... Types>
struct xtuple_type;

// 0 ��° Ÿ���� �䱸�Ҷ��� ���� �κ� ����ȭ
template<typename T, typename ... Types>
struct xtuple_type<0, xtuple<T, Types...>> {
	typedef T type;
};

// 0�� �ƴ� ���
template<int N, typename T, typename ... Types>
struct xtuple_type<N, xtuple<T, Types...>> : xtuple_type<N-1, xtuple<Types...>>{

};

// xtuple_type�� Ȯ�� �ϱ� ���� �Լ�
template<int N, typename T> void print_type(const T&a) {
	cout << typeid(xtuple_type<N, T>::type).name() << endl;
}

int main() {
	xtuple<int, char, double, short> t4(1, 'c', 3.3, 4);

	print_type<1>(t4);
}