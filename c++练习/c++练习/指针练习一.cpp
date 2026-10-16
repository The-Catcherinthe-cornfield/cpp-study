#include<iostream>
using namespace std;
int main() {
	int a = 10;
	int* p = &a;
	cout << "a= " << a << endl;
	cout << "&a= " << &a << endl;
	cout << "p= " << p << endl;
	cout << "*p= " << *p<< endl;
	cout << endl;
	*p = 100;
	cout << "a= " << a << endl;
	cout << endl;
	cout << "sizeof(a)=  " << sizeof(a) << endl;
	cout << "sizeof(p)=  " << sizeof(p) << endl;
	cout << endl;
	double d = 3.14;
	double* pd = &d;
	cout << "sizeof(pd)= " << sizeof(pd) << endl;

}