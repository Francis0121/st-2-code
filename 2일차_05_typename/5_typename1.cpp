
class AAA {

public:
	//....
	// static int DWORD;
	typedef int DWORD;
};

int p = 0;

// 템플릿 안에 있는 타입을 꺼낼 때는 반드시 typeanme을 적어야 합니다.

template<typename T> typename T::DWORD a;

// 템플릿이 아닐때는 사용하면 안됩니다.
 
typename AAA::DWORD a; // error. AAA는 템플릿이 아니고 일반 타입입니다.

// template<class T> -> 초기 밑에 이유때문에 typename을생성 그래서 여기도 typename으로 변경
template<typename T> void foo(T a) {
	// AAA::DWORD
	typename T::DWORD * p; // 이 한줄을 해석해 보세요 
				// 1. DWORD 는 static 멤버 data이다. 곱하기 p를 하고 있다.
				// 2. DWORD는 typedef 등으로 만든 타입이다. 포인터 변수 p를 선언하고 있다.

	// typename 을 적어야지만 typedef를 판단 할 수 있다.! 
}

int main() {
	AAA aaa;
	foo(aaa);
}