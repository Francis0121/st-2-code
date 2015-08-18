// 10 템플릿 인자 3

// 이미 C++ 표준에 list가 있습니다.
#include <list>
using namespace std;

// 그런데 stack 이 필요합니다.
// 1. stack 다시 만들자
// 2. list를 재 사용하자.

// Adapter 디자인 패턴 : 기존 클래스의 인터페이스 (함수 이름)을 변경해서 클라이언트가 요구하는 새로운 클래스를 만드는 패턴 
//						C++은 템플릿과 인라인으로 성능저하없이 만들수도 있다.
//template<typename T> class stack : public list<T> {
//public:
//	inline void push(cosnt T& a) {
//		list<T>::push_back(a);
//	}
//	inline void pop() {
//		list<T>::pop_back();
//	}
//	inline T& top() {
//		return list<T>::back();
//	}
//};

// S/W 재사용은 상속 vs 포함이 있다. 포함이 좋은 경우가 더 많다.7

//template<typename T, typename C = deque<T>> class stack{
//	C st;
//public:
//	inline void push(const T& a) {
//		st.push_back(a);
//	}
//	inline void pop() {
//		st.pop_back();
//	}
//	inline T& top() {
//		return st.back();
//	}
//};


#include <vector>
#include <deque>
#include <stack> // 이 헤더에 위의 코드가 있습니다.

int main() {
	//stack<int>	st;
	// 사용자에게 list, vector에 대한 권한 넘겨준다.

	// 숙제 3. queue adpater를 만들어보세요.
	stack<int> st;
	stack<int, list<int>> st2; // list<int>를 stack으로 바꿔달라
	stack<int, vector<int>> st3;
	st.push(10);
	// st.push_front(20); // 사용자가 실 수 했다.
}