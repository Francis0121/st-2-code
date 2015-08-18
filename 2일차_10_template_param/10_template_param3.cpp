// 10 ���ø� ���� 3

// �̹� C++ ǥ�ؿ� list�� �ֽ��ϴ�.
#include <list>
using namespace std;

// �׷��� stack �� �ʿ��մϴ�.
// 1. stack �ٽ� ������
// 2. list�� �� �������.

// Adapter ������ ���� : ���� Ŭ������ �������̽� (�Լ� �̸�)�� �����ؼ� Ŭ���̾�Ʈ�� �䱸�ϴ� ���ο� Ŭ������ ����� ���� 
//						C++�� ���ø��� �ζ������� �������Ͼ��� ������� �ִ�.
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

// S/W ������ ��� vs ������ �ִ�. ������ ���� ��찡 �� ����.7

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
#include <stack> // �� ����� ���� �ڵ尡 �ֽ��ϴ�.

int main() {
	//stack<int>	st;
	// ����ڿ��� list, vector�� ���� ���� �Ѱ��ش�.

	// ���� 3. queue adpater�� ��������.
	stack<int> st;
	stack<int, list<int>> st2; // list<int>�� stack���� �ٲ�޶�
	stack<int, vector<int>> st3;
	st.push(10);
	// st.push_front(20); // ����ڰ� �� �� �ߴ�.
}