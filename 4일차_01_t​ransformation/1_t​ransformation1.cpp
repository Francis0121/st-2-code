// 1_변환
#include <iostream>
using namespace std;

class Point {
	int x, y;
public :
	Point() : x(0), y(0) {

	}
	Point(int a, int b) : x(a), y(b){
	
	}

	// 변환 연산자 함수 : 객체를 다른 타입으로 암시적 형변환 되도록 한다.
	// 특징 : 함수 이름에 리턴타입이 들어 있음으로 리턴 타입을 표시하지 않는다.
	operator int() { return x; }
};

int main() {
	double d = 3.4;
	int n = d; // Primitive Type 은 서로 암시적 형 변환이 가능하다.

	Point p(1, 2);
	n = p; // p.operator int() 함수가 있으면 된다. -> operator int() : 변환연산자
}