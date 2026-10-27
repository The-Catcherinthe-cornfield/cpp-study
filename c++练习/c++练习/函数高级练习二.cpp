#include <iostream>
#include<string>
using namespace std;
void printType(int a) {
	cout << "int a=" << a << endl;
}

void printType(double a) {
	cout << "double a=" << a << endl;
}

void printType(string a) {
	cout << "string a=" << a << endl;
}

void pp(int a,int) {
	cout << "测试函数调用" << endl;
}

int main() {
	printType(10);
	printType(10.0);
	printType("hello");

	cout << endl;

	int b = 10;
	pp(b,10);
}