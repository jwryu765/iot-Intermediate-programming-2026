// 포인터 변수 대상의 참조자 선언

#include <iostream>

using namespace std;

int main(void) {
	int num = 12;			// 기본 변수
	int* ptr = &num;		// num의 주소를 저장하는 포인터
	int** dptr = &ptr;		// ptr의 주소를 저장하는 이중포인터 // dptr -> ptr -> num -> 12

	int& ref = num;			// ref는 num의 참조 변수, ref는 num과 완전히 같은 변수처럼 동작. ref == num
	int* (&pref) = ptr;		// pref는 포인터 ptr에 대한 참조. pref == ptr
	int** (&dpref) = dptr;	// dpref는 이중포인터 dptr에 대한 참조 dpref == dptr

	cout << ref << endl;		// ref -> num, num = 12
	cout << *pref << endl;		// pref -> ptr, *pref -> *ptr, *ptr -> num , 12
	cout << **dpref << endl;	// dpref -> dptr, *dpref -> *dptr -> ptr, **dpref -> **dptr -> *ptr -> num, num = 12
	return 0;
}