// 3_iterator_category
int main() {
	// �츮�� ���� slist�� ������ ���ä���.

	slist<int> s;
	s.push_front(10);
	s.push_front(10);

	slist<int>::iterator p = s.begin();
	++p; // ok?
	--p; // ? ���������δ� ���� ������
			// �̱۸���Ʈ��� �ڷ� ���� Ư���� ���� �� ����.
}