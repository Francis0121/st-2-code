//5_lamda3
//3. () 연산자를 재정의 한 클래스 - 함수 객체
# include <iostream>
using namespace std;

struct Plus
{
	int operator()(int a, int b) {
		return a + b;
	}
};

int main() {
	Plus p;
	int n = p(1, 2); // 이 한 줄을 잘 생각해 보세요.
					// p. operator()(1, 2)로 해석 됩니다.
					// 결국 () 연산자만 재정의 하면 함수처럼 사용가능 합니다.
	cout << n << endl;
}