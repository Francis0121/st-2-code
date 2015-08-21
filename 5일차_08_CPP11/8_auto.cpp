// auto

int main() {
	const int c = 10;
	const int& r = 10;
	int n = 10;
	int* p = 10;

	// auto 추론 : 템플릿과 동일
	// 규칙 1. auto n = 표현식일때;
	//		표현식의 참조, const, volatile을 제거한다.
	auto a1 = r; // int
}