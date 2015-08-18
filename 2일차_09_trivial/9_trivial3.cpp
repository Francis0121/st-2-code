#include <iostream>
using namespace std;

// trivial traits를 만드는 일반적인 기술은 어렵습니다.

// 안드로이드 framework에서는 (모든 생성자는 trivial 하지 않다는 전제조건으로 시작한다.
template<typename T> struct has_trivial_ctor { enum { value = false }; };

template<> struct has_trivial_ctor<int> { enum { value = true }; };
template<> struct has_trivial_ctor<double> { enum { value = true }; };
// ... 모든 primitive type에 대해서 위와같이 선언한다. (그럼 기본 생성자는 해결)

struct Point {
	int x, y;
};
template<> struct has_trivial_ctor<Point> { enum { value = true }; };
// struct 구조체나 다른 코드들은 어떻게 해야하나 " 명시해라 " ...

if(has_trivial_ctor<int>::value){

}

// core/include/utils/bitset.h