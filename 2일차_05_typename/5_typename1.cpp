
class AAA {

public:
	//....
	// static int DWORD;
	typedef int DWORD;
};

int p = 0;

template<typename T> void foo(T a) {
	// AAA::DWORD
	typename T::DWORD * p; // �� ������ �ؼ��� ������ 
				// 1. DWORD �� static ��� data�̴�. ���ϱ� p�� �ϰ� �ִ�.
				// 2. DWORD�� typedef ������ ���� Ÿ���̴�. ������ ���� p�� �����ϰ� �ִ�.

	// typename �� ��������� typedef�� �Ǵ� �� �� �ִ�.! 
}

int main() {
	AAA aaa;
	foo(aaa);
}