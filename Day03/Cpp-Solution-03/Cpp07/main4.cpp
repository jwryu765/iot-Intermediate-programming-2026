///* C++ 클래스 */
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//class Human {
//private:
//	char name[20];
//	int age;
//	char job[20];
//
//public:
//	Human(const char* aname, int aage, const char* ajob) {
//		strcpy(name, aname);     // name = aname;
//		age = aage;
//		strcpy(job, ajob);       // job = ajob;
//	}
//
//	void show() {
//		cout << "이름 : " << name << ", 나이 : " << age << ", 직업 : " << job << endl;
//	}
//};
//
//int main() {
//	
//	Human h("홍길동", 30, "학생");
//	Human h1();
//  Human h1; 디폴트 생성자 호출이 안됨, 위에 입력받는 값을 설정해줬기에 디폴트 생성자를 사용할 수 없음.
// 
//	h.show();
//	
//
//	return 0;
//}