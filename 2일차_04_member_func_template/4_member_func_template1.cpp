
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

	// 일반화된(generic) 복사 생성자
	// U가 T로 복사(대입) 될 수 있다면
	// complex<U>는 complex<T>로 복사(대입) 될 수 있어야 한다.
	// => 일반화된 복사 생성자(대입 연산자)가 필요하다.
	template<typename U> complex(const complex<U>& c);
};

int main() {
	complex<int> c1(1, 2);
	complex<int> c2 = c1; // 복사 생성자 사용 - Default 복사 생성자 
	complex<double> c3 = c1;
}