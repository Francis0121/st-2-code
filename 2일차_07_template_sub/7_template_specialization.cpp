// 7_템플릿 부분 전문화 - 아주 중요합니다!!! 오늘의 핵심

#include <iostream>
using namespace std;

// primary template
template<typename T> class stack {
	T buff[100];
public:
	void push() {
		cout << "T" << endl;
	}
};

// partial specialization (부분 전문화, 부분 특화)
template<typename T> class stack<T*> {
	T buff[100];
public:
	void push() {
		cout << "T*" << endl;
	}
};

// specialization(전문화)
template<> class stack<char*> {
	char* buff[100];
public:
	void push() {
		cout << "char*" << endl;
	}
};

int main() {
	stack<int> s1;
	s1.push();

	stack<int*> s2;
	s2.push();

	stack<char*> s3;
	s3.push();
}