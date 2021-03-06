#include <iostream>
using namespace std;

// 논리적 상수성 : 외부에서 바라 볼때는 상수 함수가 되어야 하지만, 내부적으로는 멤버 변수의 값을 변경해야 하는 문제.

// 2. 변하지 않은 것과 변하는 것은 분리 되어야 한다. 상수 함수에서 변해야 하는 것이 있다면 별도의 구조체로 분리한다.

// 바꿔야 하는 변수가 한두개만 있다면 1. mutable로 가고 많이 있다면 별도의 구조체를 사용하는 것이 좋다.

struct Cache {
	char data[32];
	bool valid;
};

class Point {
	int x, y;
	Cache *pCache;
public:
	Point(int a = 0, int b = 0) : x(a), y(b){
		pCache = new Cache;
		pCache->valid = false;
	}

	// 객체의 상태를 문자열로 반환하는 함수 : java, c#에 있는 개념
	char* toString()  const {
		if (pCache->valid == false) {
			sprintf_s(pCache->data, "%d, %d", x, y);
			pCache->valid = true;
		}
		return pCache->data;
	}

	~Point() {
		delete pCache;
	}

};

int main() {
	Point p(1, 2);
	cout << p.toString() << endl;
	cout << p.toString() << endl;
}