// 6_new03
#include <iostream>
using namespace std;

class Point {
	int x, y;

public:
	Point() {
		cout << "생성자" << endl;
	}

	~Point() {
		cout << "소멸자" << endl;
	}
};

// 아래 함수가 어렵습니다. - 잘 생각해 보세요
//void* operator new (size_t sz, Point *p){
//	return p;
//}
// -----> 해당 함수는 C++ 표준이다.
//void* operator new (size_t sz, void *p){
//	return p;
//}


int main() {
	Point p;

	// new Point; // 인자가 한개인 operator new()호출
	
	new(&p) Point; // 위에 만든 인자 2개인 operator new() 호출
				// 객체 p 에 대해서 생성자를 명시적으로 호출 

	// p.Point(); // 생성자의 명시적 호출 ? error
	p.~Point(); // 소멸자의 명시적 호출 ? ok
}