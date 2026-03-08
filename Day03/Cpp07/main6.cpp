// 클래스 생성


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class MyClass {
private:
	char name[20];
	int age;
	int id;

public:
	MyClass(const char* aname, int aage, int aid);
	void getData();
};

MyClass::MyClass(const char* aname, int aage, int aid) {
			strcpy(name, aname);
			age = aage;
			id = aid;
}
	
void MyClass::getData() {
	cout << "이름 : " << name << ", 나이 : " << age << ", 학번 : " << id << endl;
}

int main() {

	MyClass obj("류재욱", 24, 20330016);
	obj.getData();

	return 0;
}