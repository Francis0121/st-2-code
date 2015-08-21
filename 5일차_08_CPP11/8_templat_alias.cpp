// _templat_alias 템플릿 별칭

// 복잡한 타입은 typedef 먼저 만드는 것이 좋다.
//typedef void(*PF)();

// C++ 11
using PF = void(*)();

int main(){

	// void(*f)();
	PF f;
}