//6_begin_end
#include <iostream>
#include <vector>
#include <type_traits>
using namespace std;

// 컨테이너의 모든 요소를 화면에 출력하는 함수.
//template<typename T> void showImp(T& c, false_type) {
//	typename T::iterator p = c.begin();
//
//	while (p != c.end()) {
//		cout << *p << " ";
//		++p;
//	}
//	cout << endl;
//}
//
//// 배열일때
//template<typename T> void showImp(T& c, true_type) {
//	auto p = c; // 배열이 이름은 시작 주소이다.
//
//	while (p != c + extent<T, 0>::value) {
//		cout << *p << " ";
//		++p;
//	}
//	cout << endl;
//}

//template<typename T> void show(T& c) {
//	showImp(c, is_array<T>());
//}


// 기존 스타일
// 1. 배열에는 begin()/end() 가 없다
// 2. 그래서 배열버전의 함수를 따로 만들어서
// 3. show에서는 is_arry<>를 사용해서 함수 오버로딩으로 해결

// C++ 11 새로운 스타일

//template<typename T> auto begin(T& c) { return c.begin(); }
//template<typename T> auto end(T& c) { return c.end(); }
//
//// 배열버전
//template<typename T, int N>
//auto begin( T(&arr)[N]) { return N; }
//
//template<typename T, int N>
//auto end(T(&arr)[N]) { return arr + N; }
//
template<typename T> void show(T& c) {
	auto p = begin(c);

	while (p != end(c)) {
		cout << *p << " ";
		++p;
	}
	cout << endl;
}

int main() {
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	vector<int> v(x, x + 10);

	show(v);
	show(x);
}