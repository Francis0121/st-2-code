// 3 단위 전략
template<typename T> class List {
public:
	void push_front(const T& a) {

	}
};

List<int> s1; // 전역 변수 - 멀티스레드 환경에서 안전하지 않다.

int main() {
	s1.push_front(10);
}