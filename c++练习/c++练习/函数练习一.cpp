#include<iostream>
using namespace std;
	//无参无返回:
	void sayHello() {
		cout << "Hello World" << endl;
	}
	
	//有参无返
	void printSum(int a, int b) {
		cout << a + b << endl;
	}
	
	//有参有返
	int square(int n) {
		int f = n * n;
		return f;
	}
	

	//无参有返
	int readScore() {
		int a = 0;
		cout << "请输入一个数字:";//这里不用加换行
		cin >> a;
		return a;
	}
	int main() {
		sayHello();
		printSum(1, 2);
		cout << square(2)<<endl;
		cout << readScore() << endl;
	}