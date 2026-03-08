// ref 참조자 2

#include <iostream>

using namespace std;

int main() {
	int num = 10;
	int& ref = num;
	int* pnum = &num;

	num++;		//11
	ref++;		//12
	(*pnum)++;	//13

	cout << "num : " << num << endl;
	cout << "ref : " << ref << endl;
	cout << "*pnum : " << *pnum << endl;

	cout << "&num : " << &num << endl;
	cout << "&ref : " << &ref << endl;

	return 0;
}