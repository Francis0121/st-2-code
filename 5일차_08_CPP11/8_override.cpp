class Base {
public:
	virtual void foo(int){}
	virtual void goo() const{}
	virtual void hoo(){}
};

class Derived : public Base {
public:
	// ���� �Լ��� ������ �ϰ� �;����ϴ�. �׷���
	// ������ �������� �Ǽ���?
	void foo(int){}				// 1. ok virtaul ���� ����
	virtual void foo(double){}	// 2. parameter Ÿ�� Ʋ��
	virtual void goo(){}		// 3. ��� �Լ��� �ƴϴ�.
	virtual void gooo(){}		// 4. �Լ��̸��� Ʋ�ȴ�.
	void hoo(){}				// 5. �����Լ��� �ƴϴ�.
};

int main() {

}