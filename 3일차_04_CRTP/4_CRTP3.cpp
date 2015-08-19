#include <iostream>
using namespace std;

template<typename T>
class SingleTon {

protected:
	SingleTon() {}
	static T* instance;

public:
	static T& GetInstance() {
		if (instance == 0) {
			instance = new T;
		}
		return *instance;
	}

};

template<typename T> T* SingleTon<T>::instance = 0;

//-------------------------
// ���콺�� �̱������� ����� �ʹ�.
class Mouse : public SingleTon<Mouse> {

};

int main() {
	Mouse& m = Mouse::GetInstance();
	cout << &m << endl;
}
