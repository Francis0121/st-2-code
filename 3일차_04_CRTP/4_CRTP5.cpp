#include <iostream>
using namespace std;

class Count {
public:
	static int cnt;
	static void print_count() {
		cout << cnt << endl;
	}

	Count() {
		++cnt;
	}
	~Count() {
		--cnt;
	}
};
int Count::cnt = 0;
// ----------------------------------
// Car�� Truck�� ��ü ������ �����ϰ� �ʹ�.
class Car {

};
class Truck {

};

int main() {
}