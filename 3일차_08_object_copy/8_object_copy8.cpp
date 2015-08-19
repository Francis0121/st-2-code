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
	
	// 싱글톤은 복사와 대입을 제거해야한다.
	SingleTon(const SingleTon&) = delete;
	SingleTon& operator=(const SingleTon&) = delete;
};

template<typename T> T* SingleTon<T>::instance = 0;

class Mouse : public SingleTon<Mouse> {

};

int main() {
	Mouse& m = Mouse::GetInstance();
	cout << &m << endl;
}
