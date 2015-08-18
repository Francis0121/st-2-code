#include <iostream>
#include <vector>
#include <list>
using namespace std;

// Step01
//void print(vector<int>& v) {
//	int n = v.front();
//	cout << n << endl;
//}


// Step02
//template<typename T> 
//void print(vector<T>& v) {
//	T n = v.front();
//	cout << n << endl;
//}



// Step03
// core/include/utils/vector.h ���� ������
/*
template <class TYPE>
class Vector : private VectorImpl
{
public:
	typedef TYPE    value_type;
*/

//template<typename T>
//void print(T& v) {
//	// T			  => list<double>
//	// T::value_type  => double
//	typename T::value_type n = v.front();
//	cout << n << endl;
//}



// Step04 - auto !!!!
template<typename T>
void print(T& v) {
	// C++11�� ������ ���� �ҽ��� ���� �����ϰ� ǥ�� �� �� �ֽ��ϴ�.
	// �ᱹ value_type ������ ��� �˴ϴ�.
	auto n = v.front();
	cout << n << endl;
}

int main() {
	// 1. vector<int> v(10, 3);
	// 2. vector<double> v(10, 3);
	list<double> v(10, 3);

	print(v);
}


// ��� template ��� �����̳ʿ��� �����ϴ� Ÿ���� �ֽ��ϴ�.
// �׷��� �� Ÿ���� �ܺο��� (���� print) �˰� ���� ���� �ֽ��ϴ�.
// �׷���, �Ʒ� ó�� ����� �˴ϴ�.
template<typename T> class list {
public:
	typedef T value_type;
	// ..........
};

list<int>::value_type n; // �ᱹ n�� _int_ Ÿ���Դϴ�.