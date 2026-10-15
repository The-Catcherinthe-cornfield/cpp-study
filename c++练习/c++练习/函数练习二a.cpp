#include<iostream>
using namespace std;
//值传递观察
void swapByValue(int x, int y) {
	int temp = x;
	x = y;
	y = temp;
	cout << "x= " << x << " " << "y= " << y << endl;
}
int main() {
	int a = 1;
	int b = 2;
	swapByValue(a, b);
	cout<< "a= " << a << " " << "b= " << b << endl;
}

