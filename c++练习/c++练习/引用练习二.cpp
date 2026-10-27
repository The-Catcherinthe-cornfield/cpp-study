#include <iostream>
#include<string>
using namespace std;
void swapByReference(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}

void printReadOnly(const int& x) {
	//x = 100;
	cout << x << endl;
}

int& fan(int& x) {
	int y = 40;
	int& g = y;
	return g;
}


int main() {
	int a = 1;
	int b = 2;
	swapByReference(a, b);
	cout << "a=" << a << " " << "b=" << b << endl;

	cout << endl;

	int c = 10;
	printReadOnly(c);

	cout << endl;

	int d = 30;
	int& r = fan(d);
	cout << r << endl;
	cout << r << endl;
	
}