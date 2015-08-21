#include <iostream>
#include <vector>
using namespace std;

// 생성자와 InitializerList

class Point {
	int x, y;
public:
	Point(int a, int b) { cout << " int, int " << endl; }
	Point(initializer_list<int> e) { cout << " initialize list" << endl; }
};

int main() {
	Point p1( 1, 2 ); // int, int
	Point p2({ 1, 2 }); // initialize list
	Point p3{ 1, 2 }; // initialize list - 핵심 !
						// 없다면 int, int 호출
	// Point p4( 1, 2, 3 );  // error
	Point p5{ 1, 2, 3 }; // initialize list
	Point p6 = { 1, 2 }; // initialize list

	// 1 ~ 10 까지로 초기화된 vector 만들기
	vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
}