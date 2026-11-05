#include <iostream>
#include<string>
using namespace std;
class Account {
	friend  class Auditor;
private:
	string owner;
	int balance;

public:
	Account(string m_owner, int m_balance) {
	owner = m_owner;
	balance = m_balance;
	}


};
class Auditor {
public:
	void showOwner(const Account& a) {
		cout <<"所有者:" << a.owner << endl;
	}
	void showBalance(const Account& a) {
		cout <<"余额:" << a.balance << endl;
	}
};
int main() {
	Account p("李四", 1500);
	Auditor q;
	q.showOwner(p);
	q.showBalance(p);
}