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
// Car와 Truck도 객체 갯수를 관리하고 싶다.
class Car {

};
class Truck {

};

int main() {
}