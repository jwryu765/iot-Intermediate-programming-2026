/*
	iterator(반복자) : 컨테이너 내부의 접근할 수 있는 포인터
	vector<int>::iterator it :  순반향 반복자 선언. 이 놈을 생략하고 auto로 선언해도 된다.
*/

#include <iostream>
#include <vector>

int main() {
	std::vector<int> v = { 10, 20, 30, 40, 50 };

	std::vector<int>::iterator iter;			// 반복자 선언
	for (iter = v.begin(); iter != v.end(); iter++) {
		std::cout << *iter << " ";			
	}
	std::cout << std::endl;

	for (auto it = v.begin(); it != v.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	std::vector<int>::reverse_iterator rit;		// 역방향 반복자 선언
	for (rit = v.rbegin(); rit != v.rend(); rit++) {
		std::cout << *rit << " ";
	}
	std::cout << std::endl;

	for (auto riter = v.rbegin(); riter != v.rend(); riter++) {
		std::cout << *riter << " ";

	}

	return 0;
}