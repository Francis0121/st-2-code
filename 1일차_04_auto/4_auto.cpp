int x = 10;

int& foo() {
	return x;
}

int main() {
	int n1 = 10;
	// int n2 = n1;
	auto n2 = n1; // 우변 타입으로 좌변 변수 타입을 컴파일 시가넹 결정해 달라.
}