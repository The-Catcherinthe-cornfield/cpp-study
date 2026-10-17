#include<iostream>
using namespace std;
int main() {
	int arr[5] = { 10, 20, 30, 40, 50 };
	int* p = arr;

	cout << "arr= " << arr << endl;
	cout << "&arr[0]=  " << &arr[0] << endl;
	cout << "p=  " << p << endl;

	for (int i = 0;i < 5;i++) {
		cout << "*p= " << *p << endl;
		p++;
	}
	cout << endl;
	p = arr;  //这里记得重置因为前面p已经累加到5了
	for (int j = 0;j < 5;j++) {
		cout << "*p= " << *(p+j) << endl;
	}

	cout << "sizeof(arr)= " << sizeof(arr) << endl;
	cout << "sizeof(p)= " << sizeof(p) << endl;
}