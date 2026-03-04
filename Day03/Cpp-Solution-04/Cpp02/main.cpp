#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class SoSimple {
private:
	int num;											  // 객체가 가지는 정수 멤버 변수
public:
	SoSimple(int n) : num(n) {}
	SoSimple& AddNum(int n) {
		num+=n;											// num에 n을 더함
		return *this;									// 자기 자신 객체를 참조로 반환
	}													// (*this는 현재 객체)
	void SimpleFunc() {
		cout << "SimpleFunc : " << num << endl;					// 일반(비-const) 멤버 함수 // 객체의 값을 변경할 수도 있는 함수
	}
	void SimpleFunc() const {
		cout << "const SimpleFunc : " << num << endl;			// const 멤버 함수 // 이 함수 안에서는 멤버 변수 변경 불가 // (this 포인터가 const SoSimple* 가 됨)
	}
};

void YourFunc(const SoSimple& obj) {							// const 참조로 객체를 받음 // 함수 내부에서는 obj를 수정할 수 없음
	obj.SimpleFunc();											// const 객체처럼 취급됨  // 따라서 const 버전의 SimpleFunc() 호출됨
}

int main(void) {
	SoSimple obj1(2);					// 일반 객체 생성 (num = 2)
	const SoSimple obj2(7);				// const 객체 생성 (num = 7) // const 객체는 비-const 멤버 함수 호출 불가
	obj1.SimpleFunc();					// 일반 객체이므로 비-const 함수 호출	// 출력: SimpleFunc : 2
	obj2.SimpleFunc();					// const 객체이므로 const 함수 호출 // 출력: const SimpleFunc : 7

	YourFunc(obj1);						// non-const 객체지만 const 참조로 전달됨 // 함수 내부에서는 const 객체처럼 동작 // const 함수 호출 // 출력: const SimpleFunc : 2
	YourFunc(obj2);						// 원래부터 const 객체 // const 참조로 전달됨 // const 함수 호출 // 출력: const SimpleFunc : 7
	return 0;
}