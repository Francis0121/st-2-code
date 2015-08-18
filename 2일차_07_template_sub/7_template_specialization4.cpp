
// Duo는 임의의 type의 임의의 개수를 가질 수 있다
template<typename T, typename U> struct Duo {
	T value1;
	U value2;

	enum { N = 2 };
};

// Recursive Duo를 사용하기 쉽도록 선형화 하는 코드
struct NullType {};

template<typename P1 = NullType,
	typename P2 = NullType,
	typename P3 = NullType,
	typename P4 = NullType,
	typename P5 = NullType>

class xtuple : public Duo<P1, xtuple<P2, P3, P4, P5, NullType>> {

};

// xtuple 이 2개의 유요한 타입일때를 위한 부분 전문화
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