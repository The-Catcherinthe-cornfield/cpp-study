//判断两张票是否相同
#include <iostream>
#include<string>
using namespace std;
class Ticket {
private:
	int m_number;
	string m_zone;
public:
	Ticket(int number, string zone) {
		m_number = number;
		m_zone = zone;
	}
	bool operator==(const Ticket &p)const {
		if (this->m_number == p.m_number && this->m_zone == p.m_zone)
			return true;
		return false;
	}
	bool operator!=(const Ticket& p)const {
		return !(*this == p);   //复用上面已经定义的判断是否相等
	}

};
int main() {
	Ticket a(101, "A");
	Ticket b(101, "A");
	Ticket c(101, "B");
	Ticket d(102, "A");

	cout << boolalpha << (a == b) <<(a!=b) <<endl;  //boolalpha是把bool输出从一和零改成true和false,调用一次之后后面就不用再写了
	cout << (a == c) <<" "<<(a != c) << endl;
	cout << (a == d) <<" "<<(a != d) << endl;




}