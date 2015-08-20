// 6�Ϻ���������3
#include <iostream>
using namespace std;

// �̵� ������ ���� ����� - ����� �����Դϴ�.(�׷��ٳ׿�?)
// C++ ���� : ���� �̵��ϴ� ����. ó�� �ʱ�ȭ�� �޸𸮸� ��� ���� �Ѵ�.

// ������ : ���� �ƴ� �ּ��� �̵�, ����Ű�� �޸𸮰� ����ȴ�.

// ������ �ᱹ �ڵ����� ������(*)�Ǵ� �������Դϴ�.

// �̵� ������ ������ ����� ���ô�.
template<typename T> 
class my_reference_wrapper {
	T* obj; // �޸𸮸� �����Ѿ� �ϹǷ� �ᱹ ������ �Դϴ�.
public:
	my_reference_wrapper(T& r) : obj(&r) {}
};

int main() {
	int n1 = 10;
	int n2 = 20;

	/*int& r1 = n1;
	int& r2 = n2;*/
	my_reference_wrapper<int> r1 = n1;
	my_reference_wrapper<int> r2 = n2;

	r2 = r1; // �� ������ ����� ������ ������.

	int& r3 = r1;

						// �� �̵���		�����̵���
	cout << n1 << endl; // 10			10
	cout << n2 << endl; // 10			20
	cout << r1 << endl; // 10			10
	cout << r2 << endl; // 10			10
} 