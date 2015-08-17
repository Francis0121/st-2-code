// 5_lamda2
// 2. 정책 변경이 가능한 함수 만들기
#include <algorithm>
using namespace std;

void Sort(int *x, int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = j + 1; j < n; j++) {
			if (x[i] > x[j])
				swap(x[i], x[j]);
		}
	}
}

int main() {

}