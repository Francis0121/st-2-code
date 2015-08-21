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

// 반복자 : 컨테이너의 요소를 차례대로 이동하기 위한 객체
//		    스마트 포인터와 유사하지만 자원 해지가 아닌 요소의 열거
template<typename T> class slist_iterator {
	Node<T>* current;
public:
	inline slist_iterator(Node<T>* p = 0) : current(p){}

	// xfind로 보내려면 진짜 포인터처럼 동작해야 한다.
	// ++, *, ==, != 있어야 한다.
	inline slist_iterator& operator++() {
		current = current->next;
		return *this;
	}
	inline T& operator*() {
		return current->data ; 
	}
	inline bool operator==(const slist_iterator& t){
		return current == t.current;
	}
	inline bool operator!=(const slist_iterator& t) {
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

	// 모든 컨테이너 설계자는 자신의 반복자 이름을
	// 미리 약속된 interator 라는 이름을 외부에 알려야 한다.
	typedef slist_iterator<T> iterator;
	
	// 모든 컨테이너는 자신의 시작요소와 마지막 다음요소를 가르키는 반복자를 리턴하는 함수를 제공해야 한다,
	// 반복자를 리턴하는 함수를 제공해야한다.

	iterator begin() {
		return iterator(head);
	}

	iterator end() {
		return iterator(0);
	}


};

int main() {
	slist<int> s;
	s.push_front(10);
	s.push_front(20);
	s.push_front(30);

	iterator p = s.begin();
	// 이제부터는 p를 s의 c의 처음 요소를 가르키는포인터로 생각하면 됩니ㅏㄷ.
	while (p != s.end()) {
		cout << *p << endl;
		++p;
	}
}
