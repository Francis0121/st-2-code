#include <iostream>
#include <vector>
#include <list>
using namespace std;

//void print(vector<int>& v) {
//	int n = v.front();
//	cout << n << endl;
//}

//template<typename T> 
//void print(vector<T>& v) {
//	T n = v.front();
//	cout << n << endl;
//}

template<typename T>
void print(T& v) {
	// T : list<double>
	T::value_type n = v.front();
	cout << n << endl;
}


int main() {
	// 1. vector<int> v(10, 3);
	// 2. vector<double> v(10, 3);
	list<double> v(10, 3);

	print(v);
}


// 모든 template 기반 컨테이너에는 저장하는 타입이 있습니다.
// 그런데 그 타입을 외부에서 (위의 print) 알고 싶을 때까 있습니다.
// 그래서, 아래 처럼 만들게 됩니다.
template<typename T> class list {
public:
	typedef T value_type;
	// ..........
};

list<int>::value_type n; // 결국 n은 _int_ 타입입니다.