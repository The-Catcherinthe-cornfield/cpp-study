#include <iostream>
#include<string>
using namespace std;
class Safe {
	friend void inspectSafe(const Safe& s);
private:
	string owner;
	int money;
public:
	Safe(string m_owner, int m_money) {
		owner = m_owner;
		money = m_money;
	}
};
void inspectSafe(const Safe& s) {
	cout << "所有者:" << s.owner << " " <<"金额:" << s.money << endl;
}
int main() {
	Safe s("张三", 800);
	inspectSafe(s);
}