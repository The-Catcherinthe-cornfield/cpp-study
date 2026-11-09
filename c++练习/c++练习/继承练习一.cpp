//谁能访问基类成员
#include <iostream>
#include<string>
using namespace std;
class Device {
public:
	int mode = 10;
protected:
	int limit = 20;
private:
	int serial = 30;

public:
	int getSerial() const {
		return serial;

	}
};
class Meter:public Device {
public:
	int getLimit() const {
		return limit;

	}


};
int main() {
	Meter m;
	cout << m.mode << endl;
	cout << m.getLimit() << endl;
	cout << m.getSerial() << endl;


}