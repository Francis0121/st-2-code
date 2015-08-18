#include <iostream>
#include <type_traits>
using namespace std;

// ��� Ÿ���� �迭�� ���� �ϴ� strcpy()�� �Ϲ�ȭ ������ �����ô�.
template<typename T> void copy_type(T* d, T*s, int sz) {

	if (!is_trivially_copyable<T>::value) {
		cout << " ���� �����ڰ� �ϴ� ���� ���� �� " << endl;

		while (sz--) {
			// new(d) T; // Default ������
			new(d) T(*s); // d ��ü�� ���ؼ� ���� ������(*s���ڷ�)ȣ��
			++d;
			++s;
		}
	}
	else {
		cout << "���� �����ڰ� �ϴ� ���� ���� ��" << endl;
		memcpy(d, s, sizeof(T)* sz);
	}

}



int main() {
	char s1[10] = "hello";
	char s2[10];

	copy_type(s2, s1, 10);

	// strcpy(s2, s1);
}
