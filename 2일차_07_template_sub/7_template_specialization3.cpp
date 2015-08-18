// 7 템플릿 부분 전문화3
#include <iostream>
using namespace std;

template<typename T, typename U> struct Duo {
	T value1;
	U value2;

	enum { N = 2; };
};

template<typename T> void print(const T& d){
	cout << T::N << endl;
}

int main() {
	Duo<int, int> d2;
	print(d2);
}