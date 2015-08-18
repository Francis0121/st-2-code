
// �� Ŭ���� ���ø��� ��� �Լ� ���ø��� ����ϴ°�?

// 1. complex�� ���ø����� ����� ����.
//	  double�̸� �� �� ������ double�� ������ �����ϴ�.


// 2. Zero initialize : T a = T()
//	  T�� ǥ�� Ÿ���̰ų� ������ �̸� 0���� �ʱ�ȭ
//	  T�� ����� Ÿ���̸� Default �����ڷ� �ʱ�ȭ

template<typename T> class complex {
	T re;
	T im;

public:
	complex(T r = T(), T i = T()) : re(r), im(i){ }

};

int main() {
	complex<int> c(1.1, 2.2);
}