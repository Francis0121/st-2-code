// 5_lamda9
// ���ٿ� ���� ��
int main() {

	// lamda������ return�� ���� ������ �����Ϸ��� �Ǵ��ؼ� �����ش�.
	auto f1 = [](int a, int b) { return a + b; };
	
	// lamda������ return�� ���� ������ �ΰ� �̻��̶�� �ص� �����Ϸ��� �Ǵ��ؼ� �����ش�.
	auto f2 = [](int a, int b) { 
		if (a > b)
			return a;
		else
			return b;
	};

	// lamda������ return�� ���� ���� ��� �ٸ� Ÿ���ϰ�� �����Ϸ��� �Ǵ��ؼ� �������� ���Ѵ�.
	// ���� Ÿ���� ����() �ڿ� ���� ���� - traling return
	auto f3 = [](int a, int b) -> int {
		if (a > b)
			return a;
		else
			return 3.0;
	};

}