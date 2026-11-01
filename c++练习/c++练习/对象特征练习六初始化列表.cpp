#include <iostream>
#include <cstdint>
#include<string>
using namespace std;
class LibraryCard {
private:
	const int id;       // 卡号
	string owner;      // 持卡人
	int quota;         // 可借数量

public:
	LibraryCard(int c_id, string c_owner, int c_quota) :id(c_id), owner(c_owner), quota(c_quota) {  //id为什么不能在构造函数体内再复制,因为{}外已经初始化了,const表示初始化之后不能更改

	}

	void show() const {
		cout << "卡号:" << id << "持卡人;" << owner << "可借数量:" << quota << endl;
	}

};
int main() {
	LibraryCard p1(1001, "张三", 3);
	LibraryCard p2(1002, "李四", 5);
	p1.show();
	p2.show();


}