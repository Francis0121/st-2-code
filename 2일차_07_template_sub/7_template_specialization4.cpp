
// Duo는 임의의 type의 임의의 개수를 가질 수 있다
template<typename T, typename U> struct Duo {
	T value1;
	U value2;

	enum { N = 2 };
};

// Recurisive Duo를 사용하기 쉽도록 선형화 하는 코드