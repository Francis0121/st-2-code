#include <iostream>
using namespace std;

template <typename T>
class Stack {
	T buff[100];
	T index;
public:
	Stack() : index(-1) {}
	// T는 크기가 큰 객체일수도 있다.
	// Call by value 는 동일 객체를 메모리에 한번 더 생성한다.
	// const T& 가 좋다.
	//void push(T a) {
	void push(const T& a){
		buff[++index] = a;
	}
	// pop()이 제거와 리턴을 동시에 하면 최적화 할 수 없다.
	// 임시객체를 막을 수 없다.
	/*
	T pop() {
		return buff[index--];
	}*/
	void pop() { --index; } // 제거만
	T& top() { return buff[index]; } // 리터만
};

int main() {
	Stack<int> s;
	s.push(10);
	cout << s.top () << endl;
}