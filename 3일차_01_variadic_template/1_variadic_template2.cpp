//~ 아직 부족
#include <iostream>
using namespace std;

template<typename T> class xtuple {
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

template<typename T, typename ... Types> 
class xtuple : public xtuple<Types...> {
public:
	T value;

	xtuple() {

	}

	xtuple(const T& a, Types ... args) : value(a), xtuple<Types...>(args...) {}

	enum {
		N = 1 + xtuple<Types...>::N;
	};
};

template<typename T> int xtuple_size(T& a) {
	return T::N;
}


int main() {
	xtuple<int, char, double, short> t4(1, 'c', 3.3, 4);
	cout << xtuple_size(t4) << endl;
	xtuple<int> t1(3);
}