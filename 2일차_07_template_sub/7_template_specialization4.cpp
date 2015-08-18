
// Duo�� ������ type�� ������ ������ ���� �� �ִ�
template<typename T, typename U> struct Duo {
	T value1;
	U value2;

	enum { N = 2 };
};

// Recursive Duo�� ����ϱ� ������ ����ȭ �ϴ� �ڵ�
struct NullType {};

template<typename P1 = NullType,
	typename P2 = NullType,
	typename P3 = NullType,
	typename P4 = NullType,
	typename P5 = NullType>

class xtuple : public Duo<P1, xtuple<P2, P3, P4, P5, NullType>> {

};

// xtuple �� 2���� ������ Ÿ���϶��� ���� �κ� ����ȭ
template<typename A, typename B>
class xtuple<A, B, NullType, NullType, NullType> : public Duo<A, B> {

};

int main() {
	//						Duo<long, double>
	//					Duo<short, xtuple<long, double, N, N, N>>
	//			Duo<char, xtuple<short, long , double, N, N>>
	// Duo <int, xtuple<char, short, long, double, N>>
	xtuple<int, char, short, long, double> t5;
	xtuple<int, int, int> t3;
}