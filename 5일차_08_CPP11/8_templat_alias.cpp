// _templat_alias ���ø� ��Ī

// ������ Ÿ���� typedef ���� ����� ���� ����.
//typedef void(*PF)();

// typedef vector<int, MyAlloc<int>> MyVector;
// �Ʒ� �ڵ�ó�� ����ϰ� ���� ���� ����.
// template<typename T> typedef vector<T, MyAlloc<T>> MyVector; // �ȵ�

#include <vector>
using namespace std;
template <typename T>
class MyAlloc{};

// C++ 11�� using�� template�� �ȴ�.
// "template alias" ���� "template typdef" ��� �̸��� ���� ����
template<typename T>
using MyVector = vector<T, MyAlloc<T>>;

// C++ 11
using PF = void(*)();

int main(){

	// void(*f)();
	PF f;

	//MyVector<int> v;
}