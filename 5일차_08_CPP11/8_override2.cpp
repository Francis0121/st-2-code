class Base {
public:
	virtual void foo(int) {}
	virtual void goo() const {}
	virtual void hoo() {}
};

class Derived : public Base {
public:
	// ���� �Լ��� ������ �ϰ� �;����ϴ�. �׷���
	// ������ �������� �Ǽ���?
	void foo(int) override {}				// 1. ok virtaul ���� ����
	virtual void foo(double) override {}	// 2. error  parameter Ÿ�� Ʋ��
	virtual void goo() override {}		// 3. error ��� �Լ��� �ƴϴ�.
	virtual void gooo() override {}		// 4. error �Լ��̸��� Ʋ�ȴ�.
	void hoo() override {}				// 5. error �����Լ��� �ƴϴ�.
};

int main() {

}