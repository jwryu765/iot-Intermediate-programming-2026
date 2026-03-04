#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class MyClass {
private:
    char* m_name;
    int m_age;

public:
    MyClass(const char* name = " ", int age = 0) {
        m_age = age;

        m_name = new char[strlen(name) + 1];
        strcpy(m_name, name);
    }

    MyClass(const MyClass& other) {
        m_age = other.m_age;

        m_name = new char[strlen(other.m_name) + 1];
        strcpy(m_name, other.m_name);
    }

    ~MyClass() {
        delete[] m_name;
    }

    void ShowClass() const {
        cout << "이름 : " << m_name << endl;
        cout << "나이 : " << m_age << endl;
    }
};

int main() {

    MyClass obj1("홍길동", 30);
    MyClass obj2;

    obj1.ShowClass();
    obj2.ShowClass();

    return 0;
}