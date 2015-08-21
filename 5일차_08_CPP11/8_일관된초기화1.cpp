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
	int n1 = 0;
	int n2(0);
	int x[10];
	Point p;
	Complex c;
}