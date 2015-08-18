#include <iostream>
using namespace std;

// trivial traits를 만드는 일반적인 기술은 어렵습니다.

// 안드로이드 framework에서는 
template<typename T> struct has_trivial_ctor {
	enum { value = false };
};

if(has_trivial_ctor<int>::value){

}