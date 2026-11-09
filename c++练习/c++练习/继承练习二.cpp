//对照三种继承方式

//保护对象是派生类可以访问类外不能访问,隐私权限是派生类和类外都不能访问
//而保护继承则会把父类中的公共属性变为保护属性也就是从派生类中创建的对象属性会变化,隐私继承也类似,会把基类中的公共和保护属性都变成隐私权限
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
class ProtectedMeter :protected Device {
public:
	int sum() const {
		return mode + limit;
	}
};
class PrivateMeter :private Device {
public:
	int sum() const {
		return mode + limit;
	}
};
int main() {
	PublicMeter pub;
	ProtectedMeter pro;
	PrivateMeter pri;

	cout << pub.sum() << endl;
	cout<<pro.sum()<<endl;
	cout<<pri.sum()<<endl;

	cout << pub.mode << endl;
	/*cout << pro.mode << endl;
	cout << pri.mode << endl;*/
}
