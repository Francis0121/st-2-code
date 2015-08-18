#include <iostream>
using namespace std;

// tuple 은 C++ 표준에 이미 있습니다.
// VC++2010 ~ 2012 : 10개 까지 가능 , 우리가 만든 코드와 유사한 기술 사용
// VC++2013 ~ 2015 : C++11의 가변 인자 기술.. 이론상 무한히 간으

#include <tuple>

int main() {
	int x[10]; // 같은 타입 10개 ( vector 동일 ) 
	tuple<int, double, long> t3(1, 3.3, 2); // 서로 다른 자료구조를 개수 제한 없이 저장할 수 있기 떄문에 !! 사용

	//tuple에서 값 꺼내기
	cout << get <1>(t3) << endl;

}