// 7_���ø� �κ� ����ȭ - ���� �߿��մϴ�!!! ������ �ٽ�

#include <iostream>
using namespace std;

template<typename T> class stack {
	T buff[100];
public:
	void push() {
		cout << "T" << endl;
	}
};

int main() {
	stack<int> s1;
	s1.push();

	stack<int*> s2;
	s2.push();

	stack<char*> s3;
	s3.push();
}