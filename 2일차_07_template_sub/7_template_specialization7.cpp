#include <iostream>
using namespace std;

// bool ��� type selection ���
template<bool, typename T, typename U>
struct IfThenElse {
	typedef T ResultT;
};

template<typename T, typename U>
struct IfThenElse<false, T, U> {
	typedef U ResultT;
};


// ---------------
// primary Template�� ���� ���ø� ���ڴ� 3���̴�.
// IfThenElse<bool���, Ÿ��, Ÿ��>

template <typename T, typename U> 
// IfThenElse<�һ��, Ÿ��, Ÿ��>::ResultT
typename IfThenElse< (sizeof(T)>sizeof(U)), T, U > ::ResultT
Mul(T a, U b) {
	return a * b;
}

int main() {
	cout << Mul(3.3, 2.2) << endl;
}