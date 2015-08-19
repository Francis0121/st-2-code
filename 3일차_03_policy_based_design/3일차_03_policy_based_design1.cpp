// 3 단위 전략
template<typename T, typename ThreadModel> 
class List  : public ThreadModel{
public:
	void push_front(const T& a) {
		Lock();
		// ... 
		Unlock();
	}
};

List<int> s1; // 전역 변수 - 멀티스레드 환경에서 안전하지 않다.

int main() {
	s1.push_front(10);
}