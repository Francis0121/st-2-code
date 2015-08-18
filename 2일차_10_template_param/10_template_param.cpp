// 10 템플릿 인자

// 1. type
// 2. 정수형 상수(변수 안됨. 실수 안됨)
template<typename T, int N> struct stack {
	T buff[N];
};

int main() {
	stack<int, 10> s1;

	int n = 10;
	stack<int, n> s2;
}