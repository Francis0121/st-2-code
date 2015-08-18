// 10 ���ø� ���� 3

// �̹� C++ ǥ�ؿ� list�� �ֽ��ϴ�.
#include <list>
using namespace std;

// �׷��� stack �� �ʿ��մϴ�.
// 1. stack �ٽ� ������
// 2. list�� �� �������.

template<typename T> class stack : public list<T> {
public:
	void push(cosnt T& a) {
		list<T>::push_back(a);
	}
	void pop() {
		list<T>::pop_back();
	}
	T& top() {
		return list<T>::back();
	}
};

int main() {
	stack<int>	st;
	st.push(10);
}