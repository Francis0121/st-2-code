// delegating constructor
#include <iostream>
using namespace std;
class Point {
	
public:
	int x = 0; // classs �ȿ��� �m�� ������ ��������� �ٷ� �ʱ�ȭ ���� 
	int y = 0; // java c#ó��
	int a{ 0 }; // ���� �����ϴ� ��Ÿ��

	Point(int a, int b) : x(a), y(b){}
	
	Point() : Point(0, 0) { // �����ڿ��� �ٸ� �����ڸ� ȣ���ϴ� �ڵ�
		// Point(0, 0); //�����ڿ��� �ٸ� ������ ȣ���� �ƴϰ� �ӽð�ü�� ����� ǥ���̴�.
	}
};

int main() {
	Point p;
	cout << p.x << endl;
}