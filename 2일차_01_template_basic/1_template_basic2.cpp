// 1_template_basic2.cpp

template<typename T> T square(T a) {
	return a * a;
}

int main(){
	short s = 3;

	square(3); // int 버전
	// square(s); // short 버전
	square<int>(s); // 명시적 추론을 사용하면 메모리 코드양을 줄일 수가 있다.
}

// VC++ Command Prompt 실행 : cl 1_template_basic2.cpp /FAs