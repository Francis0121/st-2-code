// 1_template_basic4.cpp

//class AAA {
//public:
//	void foo(int a) {
//		*a = 10; // error!
//	}
//};


// ������ �ν��Ͻ�ȭ(lazy instantiation)
// ������ �ʴ� �Լ�(����Լ�) ���ø��� �ν��Ͻ�ȭ(�����Լ���) ���� �ʴ´�.
// �� ������ ����� ����� ���� ���� �����Ѵ�.!

template<typename T> class AAA {
public:
	// �ش� �Լ��� �Ҹ��� �ʾұ� ������ �����Ϸ��� �� �Լ��� �������� �ʴ´�.
	void foo(T a) {
		*a = 10; 
	}
};

int main() {
	AAA<int> aaa;
	//aaa.foo(3);
}