#include <iostream>
using namespace std;

template<typename T>
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
template<typename T> int Count<T>::cnt = 0;
// ----------------------------------
// Car�� Truck�� ��ü ������ �����ϰ� �ʹ�.
class Car : public Count<Car>{

};

class Truck : public Count<Truck>{

};

int main() {
	Car c1, c2;
	Truck t1, t2;
	t1.print_count();
}