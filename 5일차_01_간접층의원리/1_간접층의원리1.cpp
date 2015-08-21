// 1 간접층의 원리

class Vector {
public:
	Vector(int sz) {

	}
};

void foo(Vector v) {

}

int main() {
	Vector v(10);
	foo(v);
	foo(20); // ??
}