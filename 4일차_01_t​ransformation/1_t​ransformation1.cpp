// 1_��ȯ
#include <iostream>
using namespace std;

class Point {
	int x, y;
public :
	Point() : x(0), y(0) {

	}
	Point(int a, int b) : x(a), y(b){
	
	}

	// ��ȯ ������ �Լ� : ��ü�� �ٸ� Ÿ������ �Ͻ��� ����ȯ �ǵ��� �Ѵ�.
	// Ư¡ : �Լ� �̸��� ����Ÿ���� ��� �������� ���� Ÿ���� ǥ������ �ʴ´�.
	operator int() { return x; }
};

int main() {
	double d = 3.4;
	int n = d; // Primitive Type �� ���� �Ͻ��� �� ��ȯ�� �����ϴ�.

	Point p(1, 2);
	n = p; // p.operator int() �Լ��� ������ �ȴ�. -> operator int() : ��ȯ������
}