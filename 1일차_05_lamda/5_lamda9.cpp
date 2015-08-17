// 5_lamda9
// 람다와 리턴 값
int main() {

	// lamda에서는 return을 적지 않으면 컴파일러가 판단해서 적어준다.
	auto f1 = [](int a, int b) { return a + b; };
	
	// lamda에서는 return을 적지 않으면 두개 이상이라고 해도 컴파일러가 판단해서 적어준다.
	auto f2 = [](int a, int b) { 
		if (a > b)
			return a;
		else
			return b;
	};

	// lamda에서는 return을 적지 않을 경우 다른 타입일경우 컴파일러가 판단해서 적어주지 못한다.
	// 리턴 타입의 인자() 뒤에 적는 문법 - traling return
	auto f3 = [](int a, int b) -> int {
		if (a > b)
			return a;
		else
			return 3.0;
	};

}