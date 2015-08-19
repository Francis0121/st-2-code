#include <iostream>
using namespace std;

template <typename T>
class Stack {
	T buff[100];
	T index;
public:
	Stack(): index(-1){}
	void push(T a) {
		buff[++index] = a;
	}
	T pop() {
		return buff[index--];
	}
};

int main() {
	Stack<int> s;
	s.push(10);
	cout << s.pop() << endl;
}