// 상수 멤버와 레퍼런스 멤버 초기화

#include <iostream>
using namespace std;

class ConstSome {					// 상수멤버일때 초기화.
public:
	const int value;				// 상수는 객체를 생성할때 반드시 초기화가 되어야한다. 그래서 콜론 초기화를 시행
	ConstSome(int i) : value(i) {

	}
	void show() { printf("value : %d", value); }
};

class RefSome {						// 레퍼런스 멤버 초기화
public :
	int& ri;
	RefSome(int &i) : ri(i) {}

	void show() { printf("ri : %d\n", ri); }
};
int main() {
	ConstSome cs(10);
	cs.show();

	int i = 5;
	RefSome rs(i);
	rs.show();

	return 0;
}