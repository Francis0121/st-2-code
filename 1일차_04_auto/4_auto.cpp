int x = 10;

int& foo() {
	return x;
}

int main() {
	int n1 = 10;
	// int n2 = n1;
	auto n2 = n1; // 우변 타입으로 좌변 변수 타입을 컴파일 시간에 결정해 달라. 
				// compile -> int n2 = n1; 으로 변경된다.

	decltype(n1) n2; // n1의 타입으로 n2를 만들어 달라 ( 초기값이 정해지지 않아도 쓸 수 있다. )

}