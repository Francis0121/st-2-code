// 1 ��ȯ3

// explicit �����ڸ� ������ Ŭ������ =�� �ʱ�ȭ�� �� ����.
// �ݵ�� () �ʱ�ȭ�� ����ؾ� �Ѵ�.

#include<memory>
using namespace std;

class Test {
	int data;
public :
	explicit Test(int n) : data(n) {

	}
};

int main() {
	shared_ptr<int> pq(new int);; // C++ ǥ�� ����Ʈ ������
	shared_ptr<int> p2 = new int// eroot;

	// �ȵ���̵� ������ ��ũ����
	String16 s1 = "LedService.samsung.com"; // eror
	String16 s1("LedService.samsung.com") // ok
}


void foo(String16 s) {

}

foo("hello"); // const char* => string 16���� �Ͻ��� ��ȯ�Ǿ���Ѵ�./
				// String16�� expliit ������ �̹Ƿ� error

foo(String("hello"))0;; // ok String16��ü�� ���� ���ޤ�

//int main() {
//
//	// �Ʒ� 2���� ��������?
//	Test t1(5); // ���ڰ� int�� �Ѱ��� ������ ȣ���ؼ� ��ü ����
//	Test t2 = t1; // ���� ������ ȣ��
//	Test t2 = 5; // 1. 5�� ��ȯ �����ڸ� ����ؼ� Test �ӽ� ��ü ����
//				// 2. ���� �����ڸ� ȣ���ؼ� �ӽð�ü�� t3�� ����
//}