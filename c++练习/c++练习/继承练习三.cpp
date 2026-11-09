//观察派生对象里存了什么
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
class PublicMeter :public Device {
public:
	int sum() const {
		return mode + limit;
	}
};
class TaggedMeter :public Device {
public:
	int tag = 40;

};
int main() {
	cout << sizeof(Device) << endl;
	cout << sizeof(PublicMeter) << endl;
	cout << sizeof(TaggedMeter) << endl;

	TaggedMeter t;
	cout << t.tag << endl;
	cout << t.getSerial() << endl;


}