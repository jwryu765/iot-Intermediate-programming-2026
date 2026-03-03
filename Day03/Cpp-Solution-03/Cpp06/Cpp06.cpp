// 배열 선언 후 문자열 초기화

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

int main() {
	char name[100];		// 배열 선언 후 배열에 대한 문자열 대입은 안됨, 무조건 초기화하여야 함
	//name = "홍길동";
	name[0] = '홍';
	name[1] = '길';
	name[2] = '동';


	return 0;
}