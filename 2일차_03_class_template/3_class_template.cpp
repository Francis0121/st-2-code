// 3_class_template

template<typename T> class stack {
	T buff[100];
	int index;
public:
	// 생성자로 맞는 것은?
	stack() {} // 1 ok ..
	stack<T>(){} // 2 일부 컴파일러는 이 표현도 허용. 하지만 1번이 정확한 표현

	// 복사 생성자
	stack(const stack& s){ } // 1 크래스 내부에서는 이 표현도 허용 단 외부 구현시에는 이 표현은 에러
	stack(const stack<T>& s){ } // 2  정확한 표현

	// 멤버 함수의 외부 구현
	void push(T a);

	// static 멤버 data 의 외부 구현
	static int count;

	// 멤버 함수 템플릿
	template<typename U> T foo(U a);
};

// 멤버 함수 템플릿
// 잘못된 구문 T stack::foo(U a);
// template<typename T, template U> X
template<typename T> template<typename U> T stack<T>::foo(U a);

// 잘못된 구문 int stack::count = 0;
// static 멤버 data 의 외부 구현
template<typename T> int stack<T>::count = 0;

// 잘못된 구문 stack:: template<typename T> stack::push(T a)
template<typename T> stack<T>::push(T a) {

}

int main() {
	stack s1; // error. stack 은 타입이 아니르 틀(template)이다
	stack<int> s2; // ok. stack<int> 는 타입이다.
}