// 3 ���� ����
template<typename T, typename ThreadModel> 
class List  : public ThreadModel{
public:
	void push_front(const T& a) {
		Lock();
		// ... 
		Unlock();
	}
};

List<int> s1; // ���� ���� - ��Ƽ������ ȯ�濡�� �������� �ʴ�.

int main() {
	s1.push_front(10);
}