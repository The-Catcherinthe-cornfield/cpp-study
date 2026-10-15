//声明实验
#include<iostream>
using namespace std;
int square(int n);
int main() {
	cout << square(2) << endl;
}
int square(int n) {
	int f = n * n;
	return f;
}