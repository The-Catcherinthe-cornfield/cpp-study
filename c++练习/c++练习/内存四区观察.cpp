#include <iostream>
#include <cstdint>
#include<string>
using namespace std;
int g = 1;
void han() {
	cout << (uintptr_t)&g << endl;      //uintptr_t 和指针一样宽，64 位下不会截断
	static int a = 2;
	cout << (uintptr_t)&a << endl;
	int b = 3;
	cout << (uintptr_t)&b << endl;
	int* p = new int(4);
	cout << (uintptr_t)p << endl;
	cout << (uintptr_t)&"hello" << endl;
	//delete p;
}
int main() {
	han();
	cout << endl;
	han();
}
