
class AAA {

public:
	//....
	// static int DWORD;
	typedef int DWORD;
};

int p = 0;

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