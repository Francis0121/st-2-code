int x = 10;

int& foo() {
	return x;
}

int main() {
	int n1 = 10;
	// int n2 = n1;
	auto n2 = n1; // �캯 Ÿ������ �º� ���� Ÿ���� ������ �ð��� ������ �޶�.
}