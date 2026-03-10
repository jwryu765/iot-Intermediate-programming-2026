#include <iostream>
using namespace std;


class P {
public:
	void f() { cout << "P::f" << endl; }
};

class C : public P {
public:
	virtual void f() { cout << "C::f" << endl; } // 인스턴스 생성시
};

int main() {
	// 내부 클래스(Inner Class) 변수처럼 사용가능한 클래스
	class A {
	public:
		virtual void f() { cout << "A::f" << endl; } // 조상의 함수에 virtual을 붙이면 가각의 인스턴스별로 f()가 호출됨
	};
	class B : public A {
	public:
		void f() override { cout << "B::f" << endl; }
	};

	A* a = new B();
	a->f(); // Output: B::f
	delete a;

	C c;
	c.f(); // Output: C::f

	P p;
	p.f(); // Output: P::f

	P* p2 = new C();
	p2->f(); // Output: P::f (because P::f is not virtual)

	P* p3 = new C();

	//C* c1 = new P(); // Error: cannot convert fro, 'P*' to "C*' (because P is not derived form C)

	return 0;
}