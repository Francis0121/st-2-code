#include <iostream>
#include <vector>
using namespace std;

// �����ڿ� InitializerList

class Point {
	int x, y;
public:
	Point(int a, int b) { cout << " int, int " << endl; }
	Point(initializer_list<int> e) { cout << " initialize list" << endl; }
};

int main() {
	Point p1( 1, 2 ); // int, int
	Point p2({ 1, 2 }); // initialize list
	Point p3{ 1, 2 }; // initialize list - �ٽ� !
						// ���ٸ� int, int ȣ��
	// Point p4( 1, 2, 3 );  // error
	Point p5{ 1, 2, 3 }; // initialize list
	Point p6 = { 1, 2 }; // initialize list

	// 1 ~ 10 ������ �ʱ�ȭ�� vector �����
	vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
}