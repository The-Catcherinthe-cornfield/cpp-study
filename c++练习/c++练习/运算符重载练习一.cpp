//两个坐标相加
#include <iostream>
#include<string>
using namespace std;
class Point {
private:
	int x, y;
public:
	Point(int m_x, int m_y) {
		x = m_x;
		y = m_y;
	}

	Point operator+(const Point& p) {
		Point temp(0,0);
		temp.x = this->x + p.x;
		temp.y = this->y + p.y;
		return temp;
	}

	void show()const {
		cout << "x= " << this->x<< " " << "y= " << this->y << endl;
	}
};
int main() {
	Point a(2, 3);
	Point b(4, -1);
	Point c = a + b;
	a.show();
	b.show();
	c.show();




}