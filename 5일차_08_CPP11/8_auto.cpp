// auto

int main() {
	const int c = 10;
	const int& r = 10;
	int n = 10;
	int* p = 10;

	// auto �߷� : ���ø��� ����
	// ��Ģ 1. auto n = ǥ�����϶�;
	//		ǥ������ ����, const, volatile�� �����Ѵ�.
	auto a1 = r; // int
}