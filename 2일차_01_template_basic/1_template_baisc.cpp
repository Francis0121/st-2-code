// Template_basic

// 함수 오버로딩
// 함수 사용자 : 하나의 함수 처럼 보인다.
// 함수 제작자 : 2개의 함수를 만들어야 한다.

//int square(int a) {
//	return a * a;
//}
//
//double square(double a) {
//	return a * a;
//}

// 유사한 코드가 반복되면 코드생성기를 사용하자.
// 1. 매크로에 의한 코드 생성
#define MAKE_SQUARE(T) T square(T a){return a * a;}

MAKE_SQUARE(int)
MAKE_SQUARE(double)

int main() {
	square(3);
	square(3.3);
}