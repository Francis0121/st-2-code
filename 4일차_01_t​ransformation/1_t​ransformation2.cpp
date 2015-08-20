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

	// OFile => FILE*로의 변환을 허용한다.
	operator FILE*() {
		return file;
	}
};

int main() {
	OFile f("a.txt");
	
	// 파일 IO 작업
	fprintf(f, "n = %d", 10);
	fputs("hello", f);

	//FILE* f = fopen("a.txt", "wt");

	String s1 = "hello"; // string 클래스

	char s2[10];
	strcpy(s2, s1); // 되는게 좋을까요? 안되는게 좋을까요?
}