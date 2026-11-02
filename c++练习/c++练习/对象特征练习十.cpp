//用this完成积分累加
#include <iostream>
#include<string>
using namespace std;
class Score {
private:
	int points;
public:
	Score(int points) {
		this->points = points;
	}
	Score& add(const Score& other) {
		this->points += other.points;
		return *this;
	}
	int getPoints()const {
		return points;
	}
};
int main() {
	Score a(10);
	Score b(20);
	Score c(5);

	a.add(b).add(c);
	cout << a.getPoints() << endl;
	cout << b.getPoints() << endl;
	cout << c.getPoints() << endl;




}