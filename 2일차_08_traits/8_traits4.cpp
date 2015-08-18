#include <iostream>
using namespace std;

template<typename T> struct IsPointer {
	enum { value = false };
};
template<typename T> struct IsPointer<T*> {
	enum { value = true };
};

// 포인터인 경우를 처리하는 함수
template<typename T> void printv_imp(T a, Yes) {
	cout << a << " " << *a << endl;
}

// 포인터가 아닌 경우
template<typename T> void printv_imp(T a, No) {
	cout << a << endl;
}

// 사용자가 사용하는 버전
template<typename T> void printv(T a) {

	// 안되는 경우 if문의 경우 런타임 이기 때문에 컴파일 타임에 실행조차 되지 않도록 해야한다.!
	// if문은 실행시간입니다. 그래서 아래코드는 실행시간 함수가 선택됩니다.
	// 그래서 컴파일러는 Yes버전과 No 버전의 모든 함수 템플릿을 인스턴스화 하게 됩ㄴ디ㅏ.
	// 결국 포인터가 아닌 경우 Yes 버전에서 error 발생.
	/*if (T is Pointer)
		printv_imp(a, Yes);
	else
		printv_imp(a, No);*/

	// 함수 오버로딩은 컴파일 시간 함수 선택 입니다.
	// 선택되지 않은 템플릿은 인스턴스화 되지 않습니다.
	// 즉, int일 경우 Yes버전은 컴파일 되지 않습니다.
	// printv_imp(a, T is Pointer ? )
	printv_imp(a, T is Pointer ? );
}

int main() {
	int n = 3;
	printv(n); 
}