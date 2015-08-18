// 10 템플릿 인자 2

// 3. template 인자로 template 을 보낼 수 있다.

// = template<class T> class list
template<typename T> class list {

};

// core/include/utils/List.h
// 불가 template<typename T, template<typename> typename C> 
// 가능 template<typename T, template<class> class C>  ---> 위에 템플릿 참고
template<typename T, template<typename> class C> class stack {
	//C c; // error. C는 template 이다.

	C<T> c; // ok
};

int main() {
	//list st1; // error, list는 template 이다.
	//list<int> st2; // ok. list<int> 는 type이다.

	stack<int, list> s;
}