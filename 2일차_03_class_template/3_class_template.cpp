//3_class_template

template<typename T> class stack {
	T buff[100];
	int index;
public:
	// 생성자로 맞는 것은?
	stack() {} // 1 ok ..
	stack<T>(){} // 2 일부 컴파일러는 이 표현도 허용. 하지만 1번이 정확한 표현

	// 복사 생성자
	stack(const stack& s){ } // 1
	stack(const stack<T>& s){ } // 2  정확한 표현

};

int main() {
	stack s1; // error. stack 은 타입이 아니르 틀(template)이다
	stack<int> s2; // ok. stack<int> 는 타입이다.
}