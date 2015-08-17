// 5_lamda2
// 2. 정책 변경이 가능한 함수 만들기
#include <algorithm>
using namespace std;

// S/W 설게의 기본 원칙 : 변하지 않은 전체 알고리즘에서 변해야 하는 부분을 찾아서 분리한다.

// 일반 함수는 변하는 부분을 함수 인자화 한다.(함수 포인터)

// C 표준 함수인 qsort()가 아래 모양이다.
// 핵심은 "알고리즘 정책의 분리" 이다.
void Sort(int* x, int n, bool(*cmp)(int, int)) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			// if (x[i] > x[j])
			if(cmp(x[i], x[j]))
				swap(x[i], x[j]);
		}
	}
}

// Sort() 사용자는 비교 함수를 전달해야 한다.
bool cmp1(int a, int b) {
	return a < b;
}

bool cmp2(int a, int b) {
	return a > b;
}

int main() {
	int x[10] = { 1,3,5,7,9, 2,4,6,8,10 };
	// 동일한 함수를 다른 정책으로 사용할 수 있게 되었다.
	Sort(x, 10, cmp1);
	Sort(x, 10, cmp2);
}