#include <iostream>
using namespace std;

// ��ȯ�� �����

// ������ �Ҹ��ڷ� �ڿ��� �����ϸ� ���ϴ�.
// RAII(Resource Acquision Is Initialize)��� �̸��� ���� ���
class OFile {
	FILE *file;
public:
	OFile(const char* name, const char* mode = "wt") {
		file = fopen(name, mode);
	}
	~OFile() {
		fclose(file);
	}

	// OFile => FILE*���� ��ȯ�� ����Ѵ�.
	operator FILE*() {
		return file;
	}
};

int main() {
	OFile f("a.txt");
	
	// ���� IO �۾�
	fprintf(f, "n = %d", 10);
	fputs("hello", f);

	//FILE* f = fopen("a.txt", "wt");

	String s1 = "hello"; // string Ŭ����

	char s2[10];
	strcpy(s2, s1); // �Ǵ°� �������? �ȵǴ°� �������?
}