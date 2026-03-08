// 복사생성자와 직접초기화, 중괄호 초기화에 대한 예시

#include <iostream>


int main() {
	int num = 10;		// 복사생성자 호출로 객체 생성
	int num1(100);		// 직접초기화(복사생성자 호출 X)로 객체 생성

	int num2{ 200 };		// 중괄호 직접 초기화
	int num3 = { 300 };		// 중괄호 복사 초기화

	int x = 3.14;
	int x1{ 3.14 };


	// std::cout << x << std::endl;
	std::cout << x1 << std::endl;

	return 0;
}