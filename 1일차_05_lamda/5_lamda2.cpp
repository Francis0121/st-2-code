// 5_lamda2
// 2. ��å ������ ������ �Լ� �����
#include <algorithm>
using namespace std;

// S/W ������ �⺻ ��Ģ : ������ ���� ��ü �˰��򿡼� ���ؾ� �ϴ� �κ��� ã�Ƽ� �и��Ѵ�.

// �Ϲ� �Լ��� ���ϴ� �κ��� �Լ� ����ȭ �Ѵ�.(�Լ� ������)

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