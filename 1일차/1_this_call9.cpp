#include <iostream>
using namespace std;


// callback 과 함수 포인터 문제
class Button {
public :
	void click() {
		
	}
};

int main() {
	Button b1, b2;
	b1.click(); // 사용자가 버튼을 클릭하면 이 함수가 호출된다고 가정합니다.
}