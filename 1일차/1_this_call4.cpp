// this_call ������ �����
#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

// C�� ����� ������ C++�� ĸ��ȭ �� ���ô�.
// �Ʒ� Ŭ������ ���̺귯�� ���� Ŭ���� ��� �����սô�.

class Thread {
public : 
	void Create() {

	}
	virtual void threadMain() {

	}
};


// �Ʒ� Ŭ������ ���̺귯�� ����� Ŭ���� �Դϴ�.
class MyThread : public Thread {
public:
	virtual void threadMain() {
		cout << "MyThread" << endl;
	}
};

int main() {
	MyThread t;
	t.Create();	// �� ���� �����尡 �����Ǿ threadMain �� �����ؾ� �մϴ�.
}