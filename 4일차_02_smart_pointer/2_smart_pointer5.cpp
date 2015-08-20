#include <iostream>
#include <memory>
using namespace std;

// 이미 C++ 표준에는 참조계수 스마트 포인터가 있습니다.
int main() {
	shared_ptr<int> p1(new int);
	shared_ptr<int> p2 = p1; // 이 순간 참조계수가 증가합니다.
}