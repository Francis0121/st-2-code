// 6_CPP_일관된초기화

struct Point {
	int x, y;
};

class Complex {
	int re;
	int im;
public:
	Complex(int a, int b) : re(a), im(b){}
};

int main() {
	//int n1 = 0;
	//int n2(0);
	//int x[10] = { 0 };
	//Point p = { 1, 2 };
	//Complex c(0, 0);

	// Uniform initialize : 변수의 종류에 상관없이 동일한 방법으로 초기화 할 수 있게 하자.

	int n1{ 0 };
	int n2{ 0 };
	int x[10]{ 0 };
	Point p{ 1, 2 };
	Complex c{ 0, 0 };

	int n3 = 3.4; // ok ... C와의 호환성 때문에 C++도 지원하기로 결정.
//	int n4{ 3.4 }; // error . preventing narrow

//	char c1{ 300 }; // error. 300은 1byte가 표현될 수 없다.
	unsigned char c2{ 200 }; // ok..
}