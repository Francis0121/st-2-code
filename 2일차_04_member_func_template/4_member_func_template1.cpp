
// 왜 클래스 탬플릿의 멤버 함수 템플릿을 사용하는가?

// 1. complex를 템플릿으로 만드는 이유.
//	  double이면 될 것 같지만 double은 성능이 느립니다.


// 2. Zero initialize : T a = T()
//	  T가 표준 타입이거나 포인터 이면 0으로 초기화
//	  T가 사용자 타입이면 Default 생성자로 초기화

template<typename T> class complex {
	T re;
	T im;

public:
	complex(T r = T(), T i = T()) : re(r), im(i){ }

};

int main() {
	complex<int> c(1.1, 2.2);
}