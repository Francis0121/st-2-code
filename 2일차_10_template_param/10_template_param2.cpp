// 10 ���ø� ���� 2

template<typename T> class list {

};

template<typename T, template<typename> class C> class stack {
	//C c; // error. C�� template �̴�.

	C<T> c; // ok
};

int main() {
	//list st1; // error, list�� template �̴�.
	//list<int> st2; // ok. list<int> �� type�̴�.

	stack<int, list> s;
}