#include <iostream>
#include<string>
using namespace std;
class Product {
private:
	int price;
	mutable int queryCount;  //mutable使query可以在常函数中修改
public:
	Product(int m_price) {
		price = m_price;
		queryCount = 0;
	}
	int getPrice() const {
		queryCount++;
		return price;

	}
	int getQueryCount() const {
		return queryCount;
	}
	void setPrice(int newPrice) {
		price = newPrice;

	}

};
int main() {
	Product a(100);
	a.setPrice(120);
	cout << a.getPrice() <<" " <<a.getQueryCount()<< endl;

	const Product b(80);
	cout << b.getPrice() << endl;
	cout << b.getPrice() << endl;
	cout << b.getQueryCount() << endl;

	//b.setPrice(90);  常对象只能常函数调用


}