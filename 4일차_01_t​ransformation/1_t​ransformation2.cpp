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
};

int main() {
	FILE* f = fopen("a.txt", "wt");
}