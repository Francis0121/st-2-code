// 5_lamda2
// 2. ��å ������ ������ �Լ� �����
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