// 10 템플릿 인자 3

// 이미 C++ 표준에 list가 있습니다.
#include <list>
using namespace std;

// 그런데 stack 이 필요합니다.
// 1. stack 다시 만들자
// 2. list를 재 사용하자.

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