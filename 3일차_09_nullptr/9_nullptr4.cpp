#include <iostream>
using namespace std;

// nullptr�� nullptr_t Ÿ�� �Դϴ�.

int main() {
	nullptr_t n = nullptr;

	int* p = nullptr; // nullptr_t => ��� ������ Ÿ������ �Ͻ��� ��ȯ �ȴ�.
// 	int a = nullptr; // nullpr �� int�� �Ͻ��� ����ȯ �ȵ�
	bool b = nullptr;  // ok
}