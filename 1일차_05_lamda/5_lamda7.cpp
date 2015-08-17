#include <iostream>
using namespace std;

// 람다와 타입
int main() {
	// 람다는 auto에 담을수 있습니다.
	auto f1 = [](int a, int b) {return a + b; };

	cout << f1(1, 2) << endl;
}