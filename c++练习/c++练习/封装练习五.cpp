//区分基类与派生类的同名成员
#include <iostream>
#include<string>
using namespace std;
class Config {
public:
	int level = 10;
	static int count;

	void show()const {
		cout << "Config" << endl;
	}

};
int Config::count = 100;   //静态成员类内定义,类外声明

class AdvancedConfig:public Config {
public:
	int level = 20;
	static int count;

	void show()const {
		cout << "AdvancedConfig" << endl;
	}

};
int AdvancedConfig::count = 200;

int main() {
	AdvancedConfig c;
	cout << c.level << endl;
	cout << c.Config::level << endl;
	c.show();
	c.Config::show();
	cout << AdvancedConfig::count << endl;
	cout << Config::count << endl;   //静态成员可以直接通过类来访问



}