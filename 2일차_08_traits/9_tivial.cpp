#include <iostream>
using namespace std;

// trival constuctor (�ڸ��� ������) : �ƹ��ϵ� ���� �ʴ� ������
// 1. �����Լ��� ����
// 2. �θ� ���ų� �θ��� �����ڰ� trivial �ϰ�
// 3. ��ü�� ����� ���ų� ��ü�� ����� �����ڰ� trivial �ϰ�
// 4. ����ڰ� ���� �����ڰ� ���ٸ� 
// �����ڴ� "trivial" �ϴ�.

class Base {

};

class A : public Base {
public:
	virtual void foo(){}
};


int main() {
	// A�� �����ڴ� trivial �ұ��?
	A* p = (A*)malloc(sizeof(A)); // �����ڰ� ȣ����� �ʴ´�.

	new (p) A; // p �޸𸮿� ���ػ����� ȣ�� "placement new"
	p->foo();
}