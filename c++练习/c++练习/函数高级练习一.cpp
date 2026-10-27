#include <iostream>
#include<string>
using namespace std;
void printInfo(string name, int age = 18, string city = "北京") {
	cout << name << " " << age << " " << city << endl;
}
void printInfo01(string name, int age = 18, string city = "北京") {   //默认参数右边的参数也必须给默认值
	cout << name << " " << age << " " << city << endl;
}
int main() {
	printInfo("张三");
	printInfo("张三",19);
	printInfo("张三",20,"上海");

	printInfo01("张三");
	printInfo01("张三",19,"上海");
	printInfo01("张三",20,"上海");
}
