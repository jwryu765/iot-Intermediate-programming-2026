// 이름과 나이 출력

#include <iostream>

int main(void) {
	int age;
	std::string name;	// string 범위연산자

	// 클래스는 우리가 만든 하나의 type이다.(하나의 자료형, C언어에서 int, char 등등...)
	std::cout << "나이와 이름를 입력하세요 : " << std::endl;	// << 출력연산자
	std::cin >> age >> name;	// >> 입력연산자

	return 0;
}