#include <iostream>
#include <memory>
using namespace std;

// �̹� C++ ǥ�ؿ��� ������� ����Ʈ �����Ͱ� �ֽ��ϴ�.
int main() {
	shared_ptr<int> p1(new int);
	shared_ptr<int> p2 = p1; // �� ���� ��������� �����մϴ�.
}