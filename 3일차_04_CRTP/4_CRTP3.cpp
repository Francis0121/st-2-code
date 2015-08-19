#include <iostream>
using namespace std;

class Cursor {

private:
	Cursor() {}
	static Cursor* instance;

public:
	static Cursor& GetInstance() {
		if (instance == 0) {
			instance = new Cursor;
		}
		return *instance;
	}

};

Cursor* Cursor::instance = 0;
