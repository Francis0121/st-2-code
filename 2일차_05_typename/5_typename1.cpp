
class AAA {

public:
	//....
	// static int DWORD;
	typedef int DWORD;
};

int p = 0;

// ���ø� �ȿ� �ִ� Ÿ���� ���� ���� �ݵ�� typeanme�� ����� �մϴ�.

template<typename T> typename T::DWORD a;

// ���ø��� �ƴҶ��� ����ϸ� �ȵ˴ϴ�.
 
typename AAA::DWORD a; // error. AAA�� ���ø��� �ƴϰ� �Ϲ� Ÿ���Դϴ�.

// template<class T> -> �ʱ� �ؿ� ���������� typename������ �׷��� ���⵵ typename���� ����
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