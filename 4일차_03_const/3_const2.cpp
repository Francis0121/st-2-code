int main() {
	int n = 10;

	// p [ *100 ]		->		n[10]

	// ��� �޸𸮰� ����ΰ�? (Point�� ��ġ�� ����!)
  	const int* p1 = &n; // p1�� ���󰡸� cosnt ��.  p [ *100 ]		->		const (n[10])
	int* const p2 = &n; // p2�� ���󰡸� const�� �ƴϴ�.
						// ������ p2��ü�� const��. const (p [ *100 ])		->		const n[10]

	//p2 = &n2; // error
	*p2 = 20; // ok

	int const* p3 = &n; // p1
	const int* p4 = &n; // p3 === p4
}

// this�� �����
class Point {
	int x, y;
public :
	void Set() {// void Set(Point* const this)
		x = 0; // this->x = 0;
		y = 0; // this->y = 0;

		this = 0; // error. this ������ ��ü�� ����̴�.
		x = 0;
	}

	// ��� �Լ��� �ǹ̴� const�� ���̸� ...
	void print() const {// void Point* const this
		x = 0; // this->x = 10;
	}
};