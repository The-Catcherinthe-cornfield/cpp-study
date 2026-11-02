//统计当前在线用户
#include <iostream>
#include <cstdint>
#include<string>
using namespace std;
class OnlineUser {
private:
	string name;
	static int onlineCount;

public:
	OnlineUser(string c_name):name(c_name) {
		onlineCount++;
	}
	~OnlineUser() {
		onlineCount--;
	}


	static int getOnlineCount(){
		return onlineCount;
	}


};
int OnlineUser::onlineCount = 0;

int main() {
	{
		cout << OnlineUser::getOnlineCount()<<endl;
		OnlineUser A("张三");
		cout << OnlineUser::getOnlineCount() << endl;
		{
			OnlineUser B("李四");
			OnlineUser C("王五");
			cout << OnlineUser::getOnlineCount() << endl;
		}





		cout << OnlineUser::getOnlineCount()<<endl;
	}
	cout << OnlineUser::getOnlineCount()<<endl;
}