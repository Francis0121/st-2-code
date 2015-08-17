#include <algorithm>
using namespace std;

// 람다 표현식의 정체

int main() {
	int x[10];

	sort(x, x + 10, [](int a, int b) {return a < b; });

	// 위 한줄을 보고 컴파일러는 아래코드를 생성합니다.
	class closure_object {
	public :
		inline bool operator()(int a, int b) const {
			return a < b;
		}
	};

	closure_object f;
	sort(x, x + 10, f);

	// 정확히는 임시 객체로 전달합니다.
	sort(x, x + 10, closure_object());
}