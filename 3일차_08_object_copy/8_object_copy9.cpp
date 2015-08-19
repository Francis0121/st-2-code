// 8 object copy 9

// 객체를 복사하는 방법 총저리

// 1. 디폴트 복사 생성자 -> 얕은 복사

// 2. 얕은 복사를 해결하는 4가지 기술.

//		A. 깊은 복사(Deep Copy)
//		B. 참조 계수(Reference Counting)
//		C. 소유권 이전 -> Move 생성자로 발전됨.
//				복사와 Move를 동시에 지원하도록 클래스를 설계하자
//		D. 복사 금지 -> delet function 개념으로 발전