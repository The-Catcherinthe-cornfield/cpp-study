#include <iostream>
#include<string>
using namespace std;
const double PI = 3.14159;
class Circle {
private:
	double Radius=4.2;

public:
	void setRadius(double r) {
		if (r <= 0) {
			cout << "输入错误请重新输入" << endl;
			return ;
		}
		Radius = r;
	}
	double getRadius() {
		return Radius;
	}
	double area() {
		return PI * Radius * Radius;
	}
	double perimeter() {
		return PI * 2 * Radius;
	}

};
int main() {
	Circle c;
	double r1 = 10;
	double r2 = -1;
	c.setRadius(r1);
	cout << c.getRadius() << endl;

	cout << endl;

	/*c.setRadius(r2);
	cout << c.getRadius() << endl;*/

	cout << endl;

	cout << c.area() << endl;
	cout << c.perimeter() << endl;

	


}