//仿函数
#include <iostream>
#include<string>
using namespace std;
class ScoreBonus {
private:
	int bonus;
public:
	ScoreBonus(int m_bonus) {
		bonus = m_bonus;
	}
	int operator()(int score)const {
		return bonus + score;
	}


};
int main() {
	ScoreBonus addFive(5);
	ScoreBonus addTen(10);
	cout<<addFive(70)<<endl;
	cout<<addTen(70)<<endl;
	cout << addFive(90) << endl;



}
