// 3_class_template

template<typename T> class stack {
	T buff[100];
	int index;
public:
	// �����ڷ� �´� ����?
	stack() {} // 1 ok ..
	stack<T>(){} // 2 �Ϻ� �����Ϸ��� �� ǥ���� ���. ������ 1���� ��Ȯ�� ǥ��

	// ���� ������
	stack(const stack& s){ } // 1 ũ���� ���ο����� �� ǥ���� ��� �� �ܺ� �����ÿ��� �� ǥ���� ����
	stack(const stack<T>& s){ } // 2  ��Ȯ�� ǥ��

	// ��� �Լ��� �ܺ� ����
	void push(T a);

	// static ��� data �� �ܺ� ����
	static int count;

	// ��� �Լ� ���ø�
	template<typename U> T foo(U a);
};

// ��� �Լ� ���ø�
// �߸��� ���� T stack::foo(U a);
// template<typename T, template U> X
template<typename T> template<typename U> T stack<T>::foo(U a);

// �߸��� ���� int stack::count = 0;
// static ��� data �� �ܺ� ����
template<typename T> int stack<T>::count = 0;

// �߸��� ���� stack:: template<typename T> stack::push(T a)
template<typename T> stack<T>::push(T a) {

}

int main() {
	stack s1; // error. stack �� Ÿ���� �ƴϸ� Ʋ(template)�̴�
	stack<int> s2; // ok. stack<int> �� Ÿ���̴�.
}