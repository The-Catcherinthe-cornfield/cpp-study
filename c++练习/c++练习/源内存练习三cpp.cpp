#include <iostream>
#include<string>
using namespace std;
int* createArray(int n) {
	int* arr = new int[n];
	for (int i = 0;i < n;i++) {
		*(arr+i) = i;
	}
	return arr;
}
int main() {
	int* p = createArray(10);  //这里已经接受了arr了后面就直接用p就行了
	for (int i = 0;i < 10;i++) {
		cout << *(p + i) << endl;
	}
	delete[]p;
}