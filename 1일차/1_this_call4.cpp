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
		// CreateThread �� �Լ��� �ݵ�� parameter �� �ϳ������Ѵ�.
		// this �� �Ѱ����� �ʴ� ���
		// CreateThread(0, 0, _threadMain, 0, 0, 0); // !! Error
		// -> this �� �Ķ���ͷ� �Ѱ��ش�.
		CreateThread(0, 0, _threadMain, this, 0, 0); // !! Error
	}

	// ������ �Լ�
	// �ٽ� 1. C�� callback �Լ��� ��ü �������� ������ �ɶ� static ����Լ��� �Ǿ���Ѵ�.
	static DWORD __stdcall _threadMain(void *p) {
		// �ᱹ p�� this������ ĳ�����ؼ� ����մϴ�.
		Thread* self = static_cast<Thread*>(p);
		self->threadMain(); // �ᱹ threadMain(self)

		// threadMain();	// compile -> this->threadMain()
						// �� threadMain(this)�� �Ǿ�� �Ѵ�.
		return 0;
	}

	virtual void threadMain() { // compile -> threadMain(Thread *this)

	}
};

// �����ϸ� ������ �߻��մϴ�... �� ���� �ϱ��?

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