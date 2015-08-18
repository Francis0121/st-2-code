// 2_Decay2.cpp

// 문자열 포인터로 받기 때문에  (T - 값임으로) 문제가 생기지 않는다.
//template<typename T> void foo(T a, T b) {
//	
//}
//
//int main() {
//	foo("orange", "apple");
//}




// 문자열로 받기 때문에  (T - 배열 값임으로 크기가 5,6) 문제가 발생한다.
//template<typename T> void foo(T& a, T& b) {
//
//}
//
//int main() {
//	foo("orange", "apple");
//}



// T&으로 만들 때 문자열을 보낼 때 혼란스러워 질 수 있다.
// 이 경우는 문자열 전용 버전을 만들면 된다.
// 함수 찾는 순서.
// 1. 정확한 타입 : 문자열 배열 버전의 함수.
// 2. 변환 가능한 타입 : 문자열 포인터 버전의 함수.
// 3. template 사용
// 4. 가변인자 사용.
// 5. error

template<typename T> void foo(T& a, T& b) {

}

void foo(char* s1, char* s2) { // 2번을 찾게 된다.

}

int main() {
	foo("orange", "apple");
}