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

int main() {
	xtuple<int> t1(3);
}