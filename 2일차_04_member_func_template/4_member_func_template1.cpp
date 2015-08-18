
// 왜 클래스 탬플릿의 멤버 함수 템플릿을 사용하는가?

// 1. complex를 템플릿으로 만드는 이유.
//	  double이면 될 것 같지만 double은 성능이 느립니다.


template<typename T> class complex {
	T re;
	T im;

public:
	complex(T r = 0, T i = 0) : re(r), im(i){ }

};

int main() {
	complex<int> c(1.1, 2.2);
}