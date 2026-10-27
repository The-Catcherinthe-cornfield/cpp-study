#include <iostream>
#include<string>
using namespace std;
int main() {
	int a = 10;
	int& r = a;
	r = 100;
	cout << "a=" << a << endl;
	cout << "r=" << r << endl;
	cout << "&a=" <<  & a << endl;
	cout << "&r=" <<  & r << endl;

	cout << endl;

	cout << "sizeof(a)=" << sizeof(a) << endl;
	cout << "sizeof(r)=" << sizeof(r) << endl;

	cout << endl;

	int b = 20;
	r = b;
	cout << a << endl;
	/*&r = b;
	cout << r << endl;*/

}
