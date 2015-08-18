
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

	// �Ϲ�ȭ��(generic) ���� ������
	// U�� T�� ����(����) �� �� �ִٸ�
	// complex<U>�� complex<T>�� ����(����) �� �� �־�� �Ѵ�.
	// => �Ϲ�ȭ�� ���� ������(���� ������)�� �ʿ��ϴ�.
	template<typename U> complex(const complex<U>& c);
};

int main() {
	complex<int> c1(1, 2);
	complex<int> c2 = c1; // ���� ������ ��� - Default ���� ������ 
	complex<double> c3 = c1;
}