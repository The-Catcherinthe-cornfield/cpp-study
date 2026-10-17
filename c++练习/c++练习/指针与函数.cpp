#include<iostream>
using namespace std;
void swapByPointer(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}
void swapByValue(int x, int y) {//这里没必要return并且return不能写成return a,b 这并不是返回两个值的意思
	int temp = x;
	x = y;
	y = temp;
	cout<<"x=" << x << " " << "y=" << y << endl;
}
int main() {
	int a = 10;
	int b = 20;
	swapByPointer(&a, &b);
	cout << "a=" << a << " " << "b=" << b << endl;

	swapByValue(a, b);
	cout<< "a=" << a << " " << "b=" << b << endl;




}
