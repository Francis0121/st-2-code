#include <iostream>
using namespace std;

template<int N> struct int2type {
	enum { value = N };
};