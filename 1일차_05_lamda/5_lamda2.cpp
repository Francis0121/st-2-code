// 5_lamda2
// 2. 정책 변경이 가능한 함수 만들기
#include <algorithm>
using namespace std;

// S/W 설게의 기본 원칙 : 변하지 않은 전체 알고리즘에서 변해야 하는 부분을 찾아서 분리한다.

// 일반 함수는 변하는 부분을 함수 인자화 한다.(함수 포인터)

void Sort(int* x, int n, bool(*cmp)(int, int)) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = j + 1; j < n; j++) {
			// if (x[i] > x[j])
			if(cmp(x[i], x[j]))
				swap(x[i], x[j]);
		}
	}
}

int main() {

}