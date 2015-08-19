// 3_thinTemplate

// T를 사용하지 않는 모든 멤버 함수는 부모 클래스로 만든다.
// 부모 함수 2개 + 자식 함수 2개 * 3개 타입 => 8개 함수
class VectorImpl {
	void* buffer[100]; // C에서 배우는 void* 기반 컨테이너
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

// 위 클래스를 바로 사용하면 항상 캐스팅하는 불편함이 있습니다.
// 자식 템플릿을 만들어서 캐스팅만 책임지게 합니다.
template<typename T> class Vector : public VectorImpl {

public:

	inline void push_front(T a) {
		VectorImpl::push_front((void*)a);
	}

	inline T front() {
		return static_cast<T>(VectorImpl::front());
	}

};

int main() {
	Vector<int> v1;
	Vector<char> v2;
	Vector<double> v3; // Vector의 멤버 변수는 몇개 일까요?
}