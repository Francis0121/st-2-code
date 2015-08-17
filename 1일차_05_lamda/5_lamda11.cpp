// 5_lamda11
#include <iostream>
using namespace std;

int main() {
	int v1 = 10;
	int v2 = 20;

	auto f = [v1](int a, int b) { return a + b + v1; };

	// 위 한줄의 정확한 원리
	class closure_object{
		int value1;

	public:
		closure_object(int v1) : value1(v1) {}

		inline int operator()(int a, int b) const {
			return a + b + value1;
		}
	};

	auto f = closure_object(v1); // 지역변수를 값으로 전달 합니다.
}