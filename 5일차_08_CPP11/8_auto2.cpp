int main() {
	int n = 10;
	int* p = &n;

	decltype(*p) n2 = n; // n2�� ����Ÿ���ϱ��? �߻����غ�����
					// ��Ʈ ����Ʈ �����͸� ���鶧 �����غ�����
					// int& �Դϴ�.


	auto n3 = *p; // n3�� int

	decltype(auto) n4 = *p; // �캯�� ���� �߷��ϴµ� �߷� ����� decltype���� �ش޶�
							// �ᱹ ����
}