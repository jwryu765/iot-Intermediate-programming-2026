///* C++ 클래스 */
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//class MyClass {
//private:
//	char name[20];
//	int age;
//	int id;
//
//public:
//	void setData(const char* aname, int aage, int aid) {
//		strcpy(name, aname);
//		age = aage;
//		id = aid;
//	}
//
//	void getData() {
//		cout << "이름 : " << name << ", 나이 : " << age << ", 학번 : " << id << endl;
//	}
//};
//
//	int main() {
//
//		MyClass obj;								// 디폴트 생성자 호출. MyClass obj(): 함수 호출
//		obj.setData("류재욱", 24, 20330016);
//		//MyClass obj("류재욱", 24, 20330016);
//
//		obj.getData();
//
//		return 0;
//	}