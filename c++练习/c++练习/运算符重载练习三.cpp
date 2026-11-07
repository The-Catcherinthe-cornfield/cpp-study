//区分前置递增与后置递增
#include <iostream>
#include<string>
using namespace std;
class Counter {
private:
	int value;
public:
	Counter(int m_value) {
		value = m_value;
	}

	int getValue() const {
		return this->value;
	}

	Counter& operator++() {
		this->value++;
		return *this;
	}

	Counter operator++(int) {   //后置递增,要用一个int占用符,并且要先定义一个空类接收增长前的
		Counter temp = this->value;
		this->value++;
		return temp;
	}

};
int main() {
	Counter c(5);
	cout << c.getValue() << endl;
	cout << (++c).getValue() << endl ;
	cout << c.getValue() << endl;
	Counter old = c++;
	cout << old.getValue() << endl;
	cout << c.getValue() << endl;

}
