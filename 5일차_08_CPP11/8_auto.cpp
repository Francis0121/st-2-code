// auto

int main() {
	const int c = 10;
	const int& r = 10;
	int n = 10;
	int* p = &n;

	// auto �߷� : ���ø��� ����
	// ��Ģ 1. auto n = ǥ�����϶�;
	//		ǥ������ ����, const, volatile�� �����Ѵ�.
	auto a1 = r; // int

	// ��Ģ 2. auto& n = ǥ�����϶�
	//		ǥ������ ���� �Ӽ��� �����Ѵ�.
	auto& a2 = r; // auto : const int , a2: const int&

	// decltype 
	decltype(r) n2 = c;
}