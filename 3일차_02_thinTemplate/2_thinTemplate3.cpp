// 3_thinTemplate

// T�� ������� �ʴ� ��� ��� �Լ��� �θ� Ŭ������ �����.
// �θ� �Լ� 2�� + �ڽ� �Լ� 2�� * 3�� Ÿ�� => 8�� �Լ�
class VectorImpl {
	void* buffer[100]; // C���� ���� void* ��� �����̳�
	int sz;
public:
	int size() {
		return sz;
	}

	bool empty() {
		return sz == 0;
	}

	void push_front(void* a) {

	}

	void* front() {
		return buffer[0];
	}

};

// �� Ŭ������ �ٷ� ����ϸ� �׻� ĳ�����ϴ� �������� �ֽ��ϴ�.
// �ڽ� ���ø��� ���� ĳ���ø� å������ �մϴ�.
// ~ public ����� private ������� ��ȭ��Ű��(Vector �Լ� ���� �͵��� ȣ�� ��Ű�� ���ϵ��� �Ѵ�.
// ~ ���� �׿� ���� ������� size, empty�� ����� �־�� �Ѵ�.
template<typename T> class Vector : private VectorImpl {

public:

	inline void push_front(T a) {
		VectorImpl::push_front((void*)a);
	}

	inline T front() {
		return static_cast<T>(VectorImpl::front());
	}

	inline int size() {
		return VectorImpl::size();
	}

	inline bool empty() {
		return VectorImpl::empty();
	}

};

int main() {
	Vector<int> v1;
	Vector<char> v2;
	Vector<double> v3; // Vector�� ��� ������ � �ϱ��?
}