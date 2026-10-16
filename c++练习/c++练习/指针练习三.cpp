#include<iostream>
using namespace std;
int main() {//const *→值不可变;const p→指向不可变;const* constp→两者都不可边
	int a = 10;
	int b = 5;
	const int* p1 = &a;
	int* const p2 = &a;
	const int* const p3 = &a;
	//*p1 = 20;
	p1 = &b;
	cout << "&a= " << p2 << endl;
	cout << "&b= " << p1 << endl;

}