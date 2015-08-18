// 10 템플릿 인자

// 1. type
// 2. 정수형 상수(변수 안됨. 실수 안됨)

template<typename T = int, int N = 10> struct stack { // Default Parameter 도 된다.
// template<typename T, int N> struct stack {
	T buff[N];
};

int main() {
	stack<int, 10> s1;

	//int n = 10;
	//stack<int, n> s2;// error. 텀파일 시간 상수만 가능하다.

	stack<int> s3; // N은 10
	stack<> s4; // 모든 인자르 default 값으로 쓰겠다.
}