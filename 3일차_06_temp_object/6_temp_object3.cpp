// 임시객체
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

	Point(const Point&) {
		cout << "복사생성자" << endl;
	}

};

// 함수 인자와 임시객체
// 값 타입으로 리턴하는 함수는 임시객체를 만들게 된다.!
Point foo() {
	//Point p2;
	cout << "foo" << endl;
	//return p2;
	// 리턴용도로만 객체를 만든다면.. 아래 처럼 하는 것이 좋다.
	return Point(); // 임시객체를 만들면서 리턴.
}

int main() {
	Point p1;
	cout << "AAA" << endl;
	p1 = foo();
	cout << "BBB" << endl;
}
// 1. 생성자. - p1
// 2. AAA
// 3. 생성자 - p2
// 4. foo
// 5. 복사 생성자 -리턴용 임시객체
// 6. 소멸자 - p2
// 7. 소멸자 - 임시객체용
// 8. BBB
// 9. 소멸자 - p1