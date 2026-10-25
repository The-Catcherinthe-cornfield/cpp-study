#include <iostream>
#include<string>
using namespace std;
int g = 1;
void han() {
	cout << (int) & g << endl;
	static int a = 2;
	cout << (int) & a << endl;
	int b = 3;
	cout << (int) & b << endl;
	int* p = new int(4);
	cout << (int)p << endl;
	cout <<(int) & "hello" << endl;
	//delete p;
}
int main() {
	han();
	cout << endl;
	han();
}