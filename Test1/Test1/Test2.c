#include <stdio.h>

int a;
int global_c = 100;

int func() {
	return 1;
}


int main() {
	int b;
	static int c;			// static 하고 문자열은 동일한 메모리 영역에 저장됨
	const int d = 10;
	char arr[20] = "hi";
	char* parr = "hong";

	printf("func : %p\n", func);
	printf("globa a : %p\n", &a);
	printf("global_c : %p\n", &global_c);
	printf("local b : %p\n", &b);
	printf("static c : %p\n", &c);
	printf("const d : %p\n", &d);
	printf("array : %p\n", arr);
	printf("parr : %p\n", &parr);


	return 0;
}



/*
	메모리구조(C관련 프로그램)
	data segment: stack(지역 변수, 함수 종료시 자동제거), heap(동적 메모리 할당, malloc, free : 다 쓰면 마지막에 반환), data(전역변수,정적변수 ...)
	code segment(함수저장)
*/
	