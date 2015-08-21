// 3_STL_컨테이너
#include <iostream>
using namespace std;

// 싱글리스트를 생각해 봅시다.
template <typename T> struct Node {
	T data;
	Node *next;
	Node(T a, Node* n) : data(a), next(n) {}
};

// list 안에 있는 Node를 가르키는 스마트 포인터를 도입하자
// ++로 이동하고 *로 값을 꺼낼 수 있게 하자
template<typename T> class slist_iterator {
	Node<T>* current;
public:
	slist_iterator(Node<T>* p = 0) : current(p){}

	// xfind로 보내려면 진짜 포인터처럼 동작해야 한다.
	// ++, *, ==, != 있어야 한다.
	inline slist_iterator& operator++() {
		current = current->next;
		return *this
	}
	inline T& operator*() {
		return current->data ; 
	}
	inline  bool operator==(const slist_iterator& t){
		return current == t.current;
	}
	inline bool operator!=(cinst slist_iterator& t) {
		return current != t.current;
	}
};

template<typename T> class slist {
	Node<T>* head;
public:
	slist() : head(0) {}

	// 아래 처럼 Node 의 생성자를 잘 활용하면 싱글리스트 코드를 간단하게 만들 수 있습니다.
	void push_front(const T& a) {
		head = new Node<T>(a, head);
	}
};

int main() {
	slist<int> s;
	s.push_front(10);
	s.push_front(20);
	s.push_front(30);
}
