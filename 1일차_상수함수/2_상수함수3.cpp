#include <iostream>
using namespace std;

// ���� �����
class Point {
	int x, y;
public:
	Point(int a = 0, int b = 0) : x(a), y(b) {}

	// ��ü�� ���¸� ���ڿ��� ��ȯ�ϴ� �Լ� : java, c#�� �ִ� ����
	char* toString() {
		static char s[32];
		sprintf(s, "%d, %d", x, y);
		return s;
	}

};

int main() {
	Point p(1, 2);
	cout << p.toString << endl;
	cout << p.toString << endl;
}