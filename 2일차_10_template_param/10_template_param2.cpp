// 10 템플릿 인자 2

template<typename T> class list {

};

template<typename T, template<typename> class C> class stack {
	//C c; // error. C는 template 이다.

	C<T> c; // ok
};

int main() {
	//list st1; // error, list는 template 이다.
	//list<int> st2; // ok. list<int> 는 type이다.

	stack<int, list> s;
}