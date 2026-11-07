//让坐标直接参与输出
#include <iostream>
#include<string>
using namespace std;

class Point {
	friend ostream& operator<<(ostream& out, const Point& p);

private:
	int x, y;
public:
	Point(int m_x, int m_y) {
		x = m_x;
		y = m_y;
	}

	Point operator+(const Point& p) {
		Point temp(0, 0);
		temp.x = this->x + p.x;
		temp.y = this->y + p.y;
		return temp;
	}

	void show()const {
		cout << "x= " << this->x << " " << "y= " << this->y << endl;
	}
};

ostream& operator<<(ostream& out, const Point& p) {  //第一个参数是传入流以承接后面的东西之后才传入cout  左移运算符记得用全局函数写.
	out <<"(" << p.x <<"," << p.y << ")";
	return out;
}

int main() {
	Point a(2, 3);
	Point b(4, -1);

	cout << a << "+" << b << "=" << a + b << endl;


}