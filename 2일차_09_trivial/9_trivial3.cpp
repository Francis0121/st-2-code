#include <iostream>
using namespace std;

// trivial traits�� ����� �Ϲ����� ����� ��ƽ��ϴ�.

// �ȵ���̵� framework������ 
template<typename T> struct has_trivial_ctor {
	enum { value = false };
};

if(has_trivial_ctor<int>::value){

}