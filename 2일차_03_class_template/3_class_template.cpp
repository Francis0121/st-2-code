//3_class_template

template<typename T> class stack {
	T buff[100];
	int index;
public:
	// �����ڷ� �´� ����?
	stack() {} // 1 ok ..
	stack<T>(){} // 2 �Ϻ� �����Ϸ��� �� ǥ���� ���. ������ 1���� ��Ȯ�� ǥ��

	// ���� ������
	stack(const stack& s){ } // 1
	stack(const stack<T>& s){ } // 2  ��Ȯ�� ǥ��

};

int main() {
	stack s1; // error. stack �� Ÿ���� �ƴϸ� Ʋ(template)�̴�
	stack<int> s2; // ok. stack<int> �� Ÿ���̴�.
}