#include <iostream>
using namespace std;

// Step 5. 실패의 전달.

// 모든 타입의 배열 [first, last) 사이의 구간에서
// 선형 검색을 수행하는 함수

// last는 검색에 포함되지 않는다. - past the end라고 부른다.

// 실패할 경우 last를 리턴한다.
template<typename T1, typename T2>
T1 xfind(T1 first, T1 last, T2 c) {
	while (first != last && *first != c)
		++first;

	return first;// == last ? 0 : first;
}

int main() {
	double x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	double* p = xfind(x, x + 10, 11); 
	
	if ( p == x + 10 )
		cout << "찾을 수 없다" << endl;
	
	cout << *p << endl;

}