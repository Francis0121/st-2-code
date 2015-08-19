#include <iostream>
using namespace std;

// SingleTon Pattern : 오직하나의 객체만 생성되게 하는 디자인 패턴

class Cursor {
private:
	Cursor();
	static Cursor* instance;
public:

};

int main(){
	Cursor c1, c2;
}