int main() {
	int n = 10;

	// p [ *100 ]		->		n[10]

	// 어느 메모리가 상수인가? (Point의 위치를 봐라!)
  	const int* p1 = &n; // p1을 따라가면 cosnt 다.  p [ *100 ]		->		const (n[10])
	int* const p2 = &n; // p2를 따라가면 const가 아니다.
						// 하지만 p2자체가 const다. const (p [ *100 ])		->		const n[10]

	//p2 = &n2; // error
	*p2 = 20; // ok

	int const* p3 = &n; // p1
	const int* p4 = &n; // p3 === p4
}

// this의 상수성
class Point {
	int x, y;
public :
	void Set() {// void Set(Point* const this)
		x = 0; // this->x = 0;
		y = 0; // this->y = 0;

		this = 0; // error. this 포인터 자체는 상수이다.
		x = 0;
	}

	// 상수 함수의 의미는 const를 붙이면 ...
	void print() const {// void Point* const this
		x = 0; // this->x = 10;
	}
};