#include <iostream>
using namespace std;

// 변환의 장단점

// 생성자 소멸자로 자원을 관리하면 편리하다.
// RAII(Resource Acquision Is Initialize)라는 이름을 가진 기술
class OFile {
	FILE *file;
public:
	OFile(const char* name, const char* mode = "wt") {
		file = fopen(name, mode);
	}
	~OFile() {
		fclose(file);
	}
};

int main() {
	FILE* f = fopen("a.txt", "wt");
}