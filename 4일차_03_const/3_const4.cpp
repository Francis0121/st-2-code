#include <iostream>
using namespace std;

//template<typename T> class Base {
//public:
//	void test() {
//		foo();
//	}
//	/*virtual void foo(const T& a) {
//		cout << "1" << endl;
//	}*/
//
//	virtual void foo(T const& a) {
//		cout << "1" << endl;
//	}
//};
//
//typedef int* PINT;
//
//class Derived : public Base<int*> {
//public:
//	// void foo(const PINT& a){
//	//void foo(const int*& a) {
//	void foo(int* const& a){
//		cout << "2" << endl;
//	}
//};
//
//int main() {
//	Base<int*>* p = new Derived;
//	p->foo(0);// 2;
//}

int main() {
	cout << typeid("aaa").name() << endl;
}