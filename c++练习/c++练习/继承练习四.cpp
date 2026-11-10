//记录仪表的构造与析构顺序
#include <iostream>
#include<string>
using namespace std;

class Device {
private:
	int serial = 30;
public:
	Device() {
		cout << "Device构造" << endl;
	}
	~Device() {
		cout << "Device析构" << endl;
	}
	int getSerial() const {
		return serial;
	}
};

class Battery {
public:
	Battery() {
		cout << "Battery构造" << endl;
	}
	~Battery() {
		cout << "Battery析构" << endl;
	}

};

class Meter :public Device {
public:
	Battery battery;
	Meter(){
		cout << "Meter构造" << endl;
	}
	~Meter(){
		cout << "Meter析构" << endl;
	}


};
int main() {
	Meter m;
	cout << m.getSerial() << endl;



}