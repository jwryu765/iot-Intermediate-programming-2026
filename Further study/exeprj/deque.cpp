#include <iostream>
#include <deque>

int main() {
	std::deque<int> dq;			// dq 객체 생성
	
	for (int i = 1; i <= 5; i++) {
		dq.push_back(i * 10);
	}

	std::deque<int>::iterator it;
	for (it = dq.begin(); it != dq.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	dq.push_front(1);				// 앞쪽에 삽입
	dq.push_front(2);				// 뒤쪽에 삽입
	dq.push_back(100);
	dq.push_front(200);

	for (it = dq.begin(); it != dq.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	for (auto rit = dq.rbegin(); rit != dq.rend(); rit++) {
		std::cout << *rit << " ";
	}

	return 0;
}