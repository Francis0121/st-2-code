// 1_template_basic4.cpp

//class AAA {
//public:
//	void foo(int a) {
//		*a = 10; // error!
//	}
//};


// 지연된 인스턴스화(lazy instantiation)
// 사용되지 않는 함수(멤버함수) 템플릿은 인스턴스화(실제함수로) 되지 않는다.
// 이 개념을 사용한 기법이 아주 많이 존재한다.!

template<typename T> class AAA {
public:
	// 해당 함수를 불르지 않았기 때문에 컴파일러는 이 함수는 생성하지 않는다.
	void foo(T a) {
		*a = 10; 
	}
};

int main() {
	AAA<int> aaa;
	//aaa.foo(3);
}