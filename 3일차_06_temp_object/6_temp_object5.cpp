#include <iostream>
using namespace std;

template <typename T>
class Stack {
	T buff[100];
	T index;
public:
	Stack() : index(-1) {}
	// T�� ũ�Ⱑ ū ��ü�ϼ��� �ִ�.
	// Call by value �� ���� ��ü�� �޸𸮿� �ѹ� �� �����Ѵ�.
	// const T& �� ����.
	//void push(T a) {
	void push(const T& a){
		buff[++index] = a;
	}
	// pop()�� ���ſ� ������ ���ÿ� �ϸ� ����ȭ �� �� ����.
	// �ӽð�ü�� ���� �� ����.
	/*
	T pop() {
		return buff[index--];
	}*/
	void pop() { --index; } // ���Ÿ�
	T& top() { return buff[index]; } // ���͸�
};

int main() {
	Stack<int> s;
	s.push(10);
	cout << s.top () << endl;
}