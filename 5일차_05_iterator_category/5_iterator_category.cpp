//5_iterator_category
#include <iostream>
#include <list>
#include <algorithm> // find() ���� �Լ��� ���� �ֽ��ϴ�.
using namespace std;

int main() {
	list<int> s;
	s.push_back(10);
	s.push_back(20);

	// STL �Լ��� : �پ��� Ÿ�Կ� ����Ǵ� �Ϲ�ȭ �Լ� 
	//			find()�� ������ �迭, list, vector��� ����� �� �ִ�.

	sort(s.begin(), s.end());
}