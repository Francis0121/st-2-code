#include <iostream>
#include <algorithm> // 정책 변경이 가능한 sort()가 이미 존재한다.
using namespace std;

bool cmp1(int a, int b) {
	return a < b;
}

bool cmp2(int a, int b) {
	return a > b;
}

int main() {
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };

	// sort의 모든 인자는 템플릿 입니다.
	// 1. 비교정책으로 일반 함수를 사용하는 경우
	sort(x, x + 10, cmp1);
	sort(x, x + 10, cmp2);
}