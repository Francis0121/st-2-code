// 3_STL_�����̳�
#include <iostream>
using namespace std;

// �̱۸���Ʈ�� ������ ���ô�.
template <typename T> struct Node {
	T data;
	Node *next;
	Node(T a, Node* n) : data(a), next(n) {}
};

// list �ȿ� �ִ� Node�� ����Ű�� ����Ʈ �����͸� ��������
// ++�� �̵��ϰ� *�� ���� ���� �� �ְ� ����
template<typename T> class slist_iterator {
	Node<T>* current;
public:
	slist_iterator(Node<T>* p = 0) : current(p){}

	// xfind�� �������� ��¥ ������ó�� �����ؾ� �Ѵ�.
	// ++, *, ==, != �־�� �Ѵ�.
	slist_iterator& operator++() {
		// ?
		return *this
	}
	? operator*() {
		return ? ; 
	}
	bool operator==(const slist_iterator& t){
	}
	bool operator!=(cinst slist_iterator& t) {

	}
};

template<typename T> class slist {
	Node<T>* head;
public:
	slist() : head(0) {}

	// �Ʒ� ó�� Node �� �����ڸ� �� Ȱ���ϸ� �̱۸���Ʈ �ڵ带 �����ϰ� ���� �� �ֽ��ϴ�.
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
