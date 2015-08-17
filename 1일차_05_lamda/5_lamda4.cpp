// 5_lamda4
// 4. 왜 함수 객체를 사용하는가? - ★★★★★★★★★★★
// 1. 일반 함수는 자신만의 타입이없다 - 반드시 이해 해야 합니다.
//	  signature 가 동일한 함수는 같은 타입이다.

struct less{
	bool operator()(int a, int b) {
		return a < b;
	}
};

less	f1;
greater f2;