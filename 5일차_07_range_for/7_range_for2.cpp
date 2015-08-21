#include <iostream>
using namespace std;

struct Point3D {
	int x, y, z;
};

int main() {
	Point3D pt = { 1, 2, 3 }; 

	for (auto n : pt) { // µÉ±î¿ä ? 
		cout << n << endl;
	}
}