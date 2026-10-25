#include <iostream>
#include<string>
using namespace std;
int * han() {
	int a = 1;  //局部变量的指针别返回
	return &a;
}
int main() {
	int* p = han();   
	cout << *p << endl;
	int* p1 = new int(10);
	cout << *p1 << endl;
	*p1 = 100;
	cout << *p1 << endl;
}