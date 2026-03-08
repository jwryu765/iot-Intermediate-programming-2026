//#include <iostream>
//using namespace std;
//
//
//class Human {		// class는 자료형
//public:
//	char name[30];
//	int age;
//	char job[30];
//
//	void show_data() {
//		printf("이름 : %s, 나이 : %d, 직업 : %s", name, age, job);
//	}
//};
//
//int main() {
//	Human h = { "홍길동", 30, "학생" };				// 구조체 변수 선언			// 대입연산자를 통한 복사를 통해 만들어진 것.
//	Human h1("홍길동", 30, "학생");						// 객체 생성 문법		// h("홍길동", 30, "학생")->생성자를 호출하는 문법
// 	
//	h.show_data();
//	cout << endl;
//	h1.show_data();
//
//	return 0;
//}