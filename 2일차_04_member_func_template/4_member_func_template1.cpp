
// �� Ŭ���� ���ø��� ��� �Լ� ���ø��� ����ϴ°�?

// 1. complex�� ���ø����� ����� ����.
//	  double�̸� �� �� ������ double�� ������ �����ϴ�.


template<typename T> class complex {
	T re;
	T im;

public:
	complex(T r = 0, T i = 0) : re(r), im(i){ }

};

int main() {
	complex<int> c(1.1, 2.2);
}