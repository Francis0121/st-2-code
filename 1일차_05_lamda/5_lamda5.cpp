#include <iostream>
#include <algorithm> // 정책 변경이 가능한 sort()가 이미 존재한다.
using namespace std;

bool cmp1(int a, int b) {
	return a < b;
}

bool cmp2(int a, int b) {
	return a > b;
}

struct less_cmp {
	inline bool operator()(int a, int b) {
		return a < b;
	}
};

struct greater_cmp {
	inline bool operator()(int a, int b) {
		return a > b;
	}
};

int main() {
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };

	// sort의 모든 인자는 템플릿 입니다.
	// 1. 비교정책으로 일반 함수를 사용하는 경우
	// 장점 : 정책을 여러번 교체 해도 sort() 기계어는 한개이다.메모리 사용량 감소
	// 단점 : 정책이 인라인 치환될 수 없기 때문에 성능 저하가 있다.
	sort(x, x + 10, cmp1); // sort(int* ,int* , bool(*)(int,int)) 함수 생성
	sort(x, x + 10, cmp2); // sort(int* ,int* , bool(*)(int,int)) 함수 생성

	// 2. 비교정책으로 함수 객체를 사용하는 경우.
	// 장점 : 정책이 인라인 치환 됨으로 속도가 빠르다
	// 단점 : 정책을 교체한 횟수 만큼의 sort()함수 생성. 코드 메모리 증가.
	less_cmp f1;
	greater_cmp f2;
	sort(x, x + 10, f1); // sort(int*, int*, less) 함수 생성
	sort(x, x + 10, f2); // sort(int*, int*, greater) 함수 생겅
}