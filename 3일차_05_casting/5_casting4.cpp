#include <iostream>
using namespace std;

class Animal {};

class Dog : public Animal {
public:
	int color;
};

//-------------------------
void foo(Dog* p) {

}

int main() {
	Dog d;
	foo(&d);
}