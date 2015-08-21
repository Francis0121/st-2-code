// 1 간접층의 원리

// 아무리 어려운 S/W 문제점도 중간층(기존 요소 사이에 새로운 요소)를 도입하면 해결할 수 있다.
// Level of indirection 이라는 원리

struct VectorSize {
	int size;
	VectorSize(int n)  // int => VectorSize로 암시적 변환된다.
		: size(n) { }
};

class Vector {
public:
	// 생성자 인자가 하나있다면 explicit가 있는것이 좋다.
	/*explicit Vector(int sz) {

	}*/
	Vector(VectorSize sz) { // VectorSize => Vector로 암시적 변환된다.
		int size = sz.size;
	}
};

void foo(Vector v) { }

int main() {
	Vector v(10); 
	foo(v); // ok
	foo(20); // int => Vector 즉, 변환생성자가 있으면 ok
}