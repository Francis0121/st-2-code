#include <iostream>
using namespace std;

// ���� �����
class Point {
	int x, y;
	char cache[32];
	bool cache_valid;

public:
	Point(int a = 0, int b = 0) : x(a), y(b), cache_valid(false){}

	// ��ü�� ���¸� ���ڿ��� ��ȯ�ϴ� �Լ� : java, c#�� �ִ� ����
	char* toString()  const {
		// static char s[32];
		if (cache_valid == false) {
			sprintf_s(cache, "%d, %d", x, y);
			cache_valid = true;
		}
		return cache;
	}

};

int main() {
	Point p(1, 2);
	cout << p.toString() << endl;
	cout << p.toString() << endl;
}