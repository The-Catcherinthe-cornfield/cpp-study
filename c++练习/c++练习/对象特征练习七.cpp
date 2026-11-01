#include <iostream>
#include <cstdint>
#include<string>
using namespace std;
class Battery {

public:
	int capacity;
	Battery(int battery):capacity(battery) {
		cout << "Battery 构造" << endl;
	}
	~Battery() {
		cout << "Battery 析构" << endl;
	}
};
class Phone {
public:

	string model;
	Battery battery;  //注意:谁先声明谁就先初始化,并不是类外就优先初始化

	Phone(string c_model,int c_capacity): model(c_model), battery(c_capacity){
		cout << "Phone 构造" << endl;
	}
	~Phone() {
		cout << "Phone 析构" << endl;
	}

};
int main() {
	Phone p("小米15", 5400);


}