// 6_CPP_�ϰ����ʱ�ȭ

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

	// Uniform initialize : ������ ������ ������� ������ ������� �ʱ�ȭ �� �� �ְ� ����.

	int n1{ 0 };
	int n2{ 0 };
	int x[10]{ 0 };
	Point p{ 1, 2 };
	Complex c{ 0, 0 };

	int n3 = 3.4; // ok ... C���� ȣȯ�� ������ C++�� �����ϱ�� ����.
//	int n4{ 3.4 }; // error . preventing narrow

//	char c1{ 300 }; // error. 300�� 1byte�� ǥ���� �� ����.
	unsigned char c2{ 200 }; // ok..
}