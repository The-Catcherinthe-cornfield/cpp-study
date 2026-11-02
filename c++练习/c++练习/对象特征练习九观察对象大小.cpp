#include <iostream>
#include<string>
using namespace std;
class Empty {
public:

};
class Number {
public:
	int value;
};
class NumberWithFunctions {
public:
	int value;
	static int count;

	void setValue(int m_value) {
		value = m_value;
	}

	int getValue() {
		return value;
	}


};
int NumberWithFunctions::count = 0;
int main() {

	cout << sizeof(Empty) << endl;
	cout << sizeof(Number) << endl;
	cout << sizeof(NumberWithFunctions) << endl;

	NumberWithFunctions p;
	p.setValue(42);
	cout << p.getValue() << endl;








	return 0;

}