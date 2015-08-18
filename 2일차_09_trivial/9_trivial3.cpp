#include <iostream>
using namespace std;

// trivial traits�� ����� �Ϲ����� ����� ��ƽ��ϴ�.

// �ȵ���̵� framework������ (��� �����ڴ� trivial ���� �ʴٴ� ������������ �����Ѵ�.
template<typename T> struct has_trivial_ctor { enum { value = false }; };

template<> struct has_trivial_ctor<int> { enum { value = true }; };
template<> struct has_trivial_ctor<double> { enum { value = true }; };
// ... ��� primitive type�� ���ؼ� ���Ͱ��� �����Ѵ�. (�׷� �⺻ �����ڴ� �ذ�)

struct Point {
	int x, y;
};
template<> struct has_trivial_ctor<Point> { enum { value = true }; };
// struct ����ü�� �ٸ� �ڵ���� ��� �ؾ��ϳ� " ����ض� " ...

if(has_trivial_ctor<int>::value){

}

// core/include/utils/bitset.h