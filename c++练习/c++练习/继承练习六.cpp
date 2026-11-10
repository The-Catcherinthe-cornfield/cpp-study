//让打印和扫描共享一个设备编号
#include <iostream>
#include<string>
using namespace std;
class Machine {
public:
	int id = 0;
};

class Printer :virtual public Machine {  //虚继承让派生类中都只有一份基类的对象

};

class Scanner :virtual public Machine {

};

class AllInOne :public Printer, public Scanner {

};
int main() {
	AllInOne a;
	a.Printer::id = 101;
	a.Scanner::id = 202;
	cout << a.Printer::id << endl;
	cout << a.Scanner::id << endl;


}