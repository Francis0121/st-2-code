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
	cout << n << endl;
}