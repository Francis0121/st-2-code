// 5_lamda4
// 4. �� �Լ� ��ü�� ����ϴ°�? - �ڡڡڡڡڡڡڡڡڡڡ�
// 1. �Ϲ� �Լ��� �ڽŸ��� Ÿ���̾��� - �ݵ�� ���� �ؾ� �մϴ�.
//	  signature �� ������ �Լ��� ���� Ÿ���̴�.

struct less{
	bool operator()(int a, int b) {
		return a < b;
	}
};

less	f1;
greater f2;