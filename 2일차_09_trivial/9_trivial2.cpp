#include <iostream>
#include <type_traits>
using namespace std;

// 모든 타입의 배열을 복사 하는 strcpy()의 일반화 버전을 만들어봅시다.
template<typename T> void copy_type(T* d, T*s, int sz) {

	if (!is_trivially_copyable<T>::value) {
		cout << " 복사 생성자가 하는 일이 있을 때 " << endl;

		while (sz--) {
			// new(d) T; // Default 생성자
			new(d) T(*s); // d 객체에 대해서 복사 생성자(*s인자로)호출
			++d;
			++s;
		}
	}
	else {
		cout << "복사 생성자가 하는 일이 없을 때" << endl;
		memcpy(d, s, sizeof(T)* sz);
	}

}



int main() {
	char s1[10] = "hello";
	char s2[10];

	copy_type(s2, s1, 10);

	// strcpy(s2, s1);
}
