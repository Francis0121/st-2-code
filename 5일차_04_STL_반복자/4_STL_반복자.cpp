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

// �ݺ��� : �����̳��� ��Ҹ� ���ʴ�� �̵��ϱ� ���� ��ü
//		    ����Ʈ �����Ϳ� ���������� �ڿ� ������ �ƴ� ����� ����
template<typename T> class slist_iterator {
	Node<T>* current;
public:
	inline slist_iterator(Node<T>* p = 0) : current(p){}

	// xfind�� �������� ��¥ ������ó�� �����ؾ� �Ѵ�.
	// ++, *, ==, != �־�� �Ѵ�.
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

	// �Ʒ� ó�� Node �� �����ڸ� �� Ȱ���ϸ� �̱۸���Ʈ �ڵ带 �����ϰ� ���� �� �ֽ��ϴ�.
	void push_front(const T& a) {
		head = new Node<T>(a, head);
	}

	// ��� �����̳� �����ڴ� �ڽ��� �ݺ��� �̸���
	// �̸� ��ӵ� interator ��� �̸��� �ܺο� �˷��� �Ѵ�.
	typedef slist_iterator<T> iterator;
	
	// ��� �����̳ʴ� �ڽ��� ���ۿ�ҿ� ������ ������Ҹ� ����Ű�� �ݺ��ڸ� �����ϴ� �Լ��� �����ؾ� �Ѵ�,
	// �ݺ��ڸ� �����ϴ� �Լ��� �����ؾ��Ѵ�.

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
	// �������ʹ� p�� s�� c�� ó�� ��Ҹ� ����Ű�������ͷ� �����ϸ� �˴Ϥ���.
	while (p != s.end()) {
		cout << *p << endl;
		++p;
	}
}
